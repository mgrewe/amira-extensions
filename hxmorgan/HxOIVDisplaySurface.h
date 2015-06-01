#pragma once

#include <hxmorgan/api.h>

#include <hxcore/HxModule.h>
#include <hxcore/HxPortRadioBox.h>
#include <hxcore/HxPortIntSlider.h>

class SoSeparator;
class SoMaterial;
class SoVertexProperty;
class SoIndexedFaceSet;
class SoTexture2;

class HXMORGAN_API HxOIVDisplaySurface : public HxModule
{
    HX_HEADER(HxOIVDisplaySurface);
public:
    /// Constructor.
    HxOIVDisplaySurface();
    
    HxPortIntSlider portEmissiveColor;
    HxConnection portTexture;
    HxConnection portTextureCoord;

    /// Update method.
    virtual void update();

    /// Compute method.
    virtual void compute();
protected:
    /// Destructor.
    virtual ~HxOIVDisplaySurface();
private:
    SoSeparator* m_p_root;
    SoMaterial* m_p_material;
    SoTexture2* m_p_texture;
    SoVertexProperty* m_p_vertexProperty;
    SoIndexedFaceSet* m_p_faceSet;
};
