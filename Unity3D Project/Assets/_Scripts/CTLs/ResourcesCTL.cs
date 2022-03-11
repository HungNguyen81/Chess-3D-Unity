using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResourcesCTL
{
    private static ResourcesCTL _instance = null;
    public static ResourcesCTL Instance
    {
        get
        {
            if (_instance == null) _instance = new ResourcesCTL();
            return _instance;
        }
    }

    #region properties
    private Material _blackMaterial;
    private Material _whiteMaterial;
    private Material _selectedMaterial;

    public Material BlackMaterial
    {
        get
        {
            if (_blackMaterial == null)
            {
                _blackMaterial = Resources.Load<Material>("Material/BlackCell");
            }
            return _blackMaterial;
        }
    }

    public Material WhiteMaterial
    {
        get
        {
            if (_whiteMaterial == null)
            {
                _whiteMaterial = Resources.Load<Material>("Material/WhiteCell");
            }
            return _whiteMaterial;
        }
    }

    public Material SelectedMaterial
    {
        get
        {
            if (_selectedMaterial == null)
            {
                _selectedMaterial = Resources.Load<Material>("Material/SelectedCell");
            }
            return _selectedMaterial;
        }
    }

    #endregion
    private ResourcesCTL()
    {

    }
}
