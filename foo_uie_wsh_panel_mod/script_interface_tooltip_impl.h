#pragma once

#include "script_interface_tooltip.h"
#include "com_tools.h"


class FbTooltip : public IDisposableImpl4<IFbTooltip>
{
protected:
    HWND m_wndtooltip;
    HWND m_wndparent;
    BSTR m_tip_buffer;
    TOOLINFO m_ti;

    FbTooltip(HWND p_wndparent);
    virtual ~FbTooltip() { }
    virtual void FinalRelease();

public:
    STDMETHODIMP get_Text(BSTR * pp);
    STDMETHODIMP put_Text(BSTR text);
    STDMETHODIMP put_TrackActivate(VARIANT_BOOL activate);
    STDMETHODIMP Activate();
    STDMETHODIMP Deactivate();
    STDMETHODIMP SetMaxWidth(int width);
    STDMETHODIMP GetDelayTime(int type, INT * p);
    STDMETHODIMP SetDelayTime(int type, int time);
    STDMETHODIMP TrackPosition(int x, int y);
};
