const Websocket = require('ws')
const wss = new Websocket.Server({ port: 8080 }, () => {
    console.log("Server started");
})

const ERR_ROOM = 'ERR';

var rooms = [{
    id: "0000",
    ps: [{
        name: "name",
        ws: "ws"
    }]
}]
rooms = []

wss.getUniqueID = function () {
    function s4() {
        return Math.floor((1 + Math.random()) * 0x10000).toString(16).substring(1);
    }
    return s4() + s4() + '-' + s4();
};

wss.on('connection', ws => {
    ws.id = wss.getUniqueID();

    ws.on('message', data => {
        console.log("data recv:", data.toString())
        // ws.send(data.toString())
        let msg = data.toString()
        let msgArr = msg.split(" ")

        let type = msgArr[0]
        if (type == 'ROOM') {
            // ROOM 1234 name
            let roomID = msgArr[1]

            if (roomID == "****") { // ROOM **** name
                let id = `${Math.floor(Math.random() * 10000)}`
                rooms.push({
                    id: id,
                    ps: [{
                        name: msgArr[2],
                        ws: ws
                    }]
                })
                ws.send(`NEWROOM ${id}`)
                console.log(id);
            } else {
                let room = findRoom(roomID)
                if (room && room.ps.length == 1) {
                    let name = msgArr[2]
                    room.ps.push({
                        "name": name,
                        "ws": ws
                    })
                    let joinMsg = `JOIN ${roomID} ${room.ps[0].name} ${name}`
                    room.ps[0].ws.send(joinMsg) // JOIN player1 player2
                    room.ps[1].ws.send(joinMsg)
                } else {
                    ws.send(ERR_ROOM);
                }
            }
        } else if (type == "START") {
            let room = findRoom(msgArr[1])

            if (room) {
                for (let p of room.ps) {
                    p.ws.send("OK")
                }
            }
        } else if (type == "MOVE") {
            let roomID = msgArr[1]

            let room = findRoom(roomID)
            if (room && room.id == roomID) {
                if (room.ps[0].ws.id == ws.id) {
                    if(room.ps[1]) 
                        room.ps[1].ws.send(msg)
                } else if (room.ps[1].ws.id = ws.id) {
                    if(room.ps[0])
                        room.ps[0].ws.send(msg)
                }
            }
        } else if (type == "TERMINATE") {
            let roomID = msgArr[1]
            let room = findRoom(roomID)

            console.log("rooms before:", rooms);
            if(room){
                if(room.ps[0].ws == ws){
                    room.ps[0] = room.ps[1]
                    room.ps.splice(1, 1);

                    if(!room.ps[0]) room.ps.splice(0,1)
                } else if(room.ps[1] && room.ps[1].ws == ws){
                    room.ps.splice(0, 1);
                }
                console.log(room.ps.length);
                if(room.ps.length == 0){
                    let index = rooms.findIndex(obj => obj.id = room.id)
                    rooms.splice(index,1)
                } else {
                    room.ps[0].ws.send(`OUT`)
                }
            }
            console.log("rooms after:", rooms);
        }
    })
})


function findRoom(id) {
    return rooms.find(room => {
        return room.id == id
    })
}

wss.on('listening', () => {
    console.log("listening on port 8080");
})