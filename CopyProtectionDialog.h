#ifndef __CopyProtectionDialog__
#define __CopyProtectionDialog__

/**
@file
Subclass of TCopyProtectionDialog, which is generated by wxFormBuilder.
*/
#include "stdafx.h"
#include "GUI.h"

/** Implementing TCopyProtectionDialog */
class CopyProtectionDialog : public TCopyProtectionDialog
{
protected:
        void doOK( wxCommandEvent& event );
public:
	/** Constructor */
	CopyProtectionDialog( wxWindow* parent );	
	wxString getName();
	wxString getCode();
private:    
    wxString m_Name;
    wxString m_Code;	
};

#endif // __CopyProtectionDialog__
