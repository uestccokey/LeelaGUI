///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2007)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI__
#define __GUI__

class TBoardPanel;

#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/frame.h>
#include <wx/radiobox.h>
#include <wx/stattext.h>
#include <wx/spinctrl.h>
#include <wx/statbox.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/hyperlink.h>
#include <wx/textctrl.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class TMainFrame
///////////////////////////////////////////////////////////////////////////////
class TMainFrame : public wxFrame 
{
	DECLARE_EVENT_TABLE()
	private:
		
		// Private event handlers
		void _wxFB_doActivate( wxActivateEvent& event ){ doActivate( event ); }
		void _wxFB_doPaint( wxPaintEvent& event ){ doPaint( event ); }
		void _wxFB_doResize( wxSizeEvent& event ){ doResize( event ); }
		void _wxFB_doNewGame( wxCommandEvent& event ){ doNewGame( event ); }
		void _wxFB_doNewRatedGame( wxCommandEvent& event ){ doNewRatedGame( event ); }
		void _wxFB_doOpenSGF( wxCommandEvent& event ){ doOpenSGF( event ); }
		void _wxFB_doSaveSGF( wxCommandEvent& event ){ doSaveSGF( event ); }
		void _wxFB_doExit( wxCommandEvent& event ){ doExit( event ); }
		void _wxFB_doUndo( wxCommandEvent& event ){ doUndo( event ); }
		void _wxFB_doForward( wxCommandEvent& event ){ doForward( event ); }
		void _wxFB_doBack10( wxCommandEvent& event ){ doBack10( event ); }
		void _wxFB_doForward10( wxCommandEvent& event ){ doForward10( event ); }
		void _wxFB_doForceMove( wxCommandEvent& event ){ doForceMove( event ); }
		void _wxFB_doPass( wxCommandEvent& event ){ doPass( event ); }
		void _wxFB_doScore( wxCommandEvent& event ){ doScore( event ); }
		void _wxFB_doToggleTerritory( wxCommandEvent& event ){ doToggleTerritory( event ); }
		void _wxFB_doToggleMoyo( wxCommandEvent& event ){ doToggleMoyo( event ); }
		void _wxFB_doResignToggle( wxCommandEvent& event ){ doResignToggle( event ); }
		void _wxFB_doSoundToggle( wxCommandEvent& event ){ doSoundToggle( event ); }
		void _wxFB_doGoRules( wxCommandEvent& event ){ doGoRules( event ); }
		void _wxFB_doHomePage( wxCommandEvent& event ){ doHomePage( event ); }
		void _wxFB_doHelpAbout( wxCommandEvent& event ){ doHelpAbout( event ); }
		
	
	protected:
		enum
		{
			ID_DEFAULT = wxID_ANY, // Default
			ID_MAINFRAME = 1000,
			ID_BOARDPANEL,
			ID_NEWGAME,
			ID_NEWRATED,
			ID_OPEN,
			ID_SAVE,
			ID_EXIT,
			ID_UNDO,
			ID_REDO,
			ID_BACK10,
			ID_FWD10,
			ID_FORCE,
			ID_PASS,
			ID_SCORE,
			ID_SHOWTERRITORY,
			ID_SHOWMOYO,
			ID_RESIGNTOGGLE,
			ID_SOUNDSWITCH,
			ID_HELPRULES,
			ID_HOMEPAGE,
			ID_HELPABOUT,
		};
		
		TBoardPanel* m_panelBoard;
		wxStatusBar* m_statusBar;
		wxMenuBar* m_menubar1;
		wxMenu* m_menu1;
		wxMenu* m_menu2;
		wxMenu* m_menuSettings;
		wxMenu* m_menu3;
		wxToolBar* m_toolBar1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void doActivate( wxActivateEvent& event ){ event.Skip(); }
		virtual void doPaint( wxPaintEvent& event ){ event.Skip(); }
		virtual void doResize( wxSizeEvent& event ){ event.Skip(); }
		virtual void doNewGame( wxCommandEvent& event ){ event.Skip(); }
		virtual void doNewRatedGame( wxCommandEvent& event ){ event.Skip(); }
		virtual void doOpenSGF( wxCommandEvent& event ){ event.Skip(); }
		virtual void doSaveSGF( wxCommandEvent& event ){ event.Skip(); }
		virtual void doExit( wxCommandEvent& event ){ event.Skip(); }
		virtual void doUndo( wxCommandEvent& event ){ event.Skip(); }
		virtual void doForward( wxCommandEvent& event ){ event.Skip(); }
		virtual void doBack10( wxCommandEvent& event ){ event.Skip(); }
		virtual void doForward10( wxCommandEvent& event ){ event.Skip(); }
		virtual void doForceMove( wxCommandEvent& event ){ event.Skip(); }
		virtual void doPass( wxCommandEvent& event ){ event.Skip(); }
		virtual void doScore( wxCommandEvent& event ){ event.Skip(); }
		virtual void doToggleTerritory( wxCommandEvent& event ){ event.Skip(); }
		virtual void doToggleMoyo( wxCommandEvent& event ){ event.Skip(); }
		virtual void doResignToggle( wxCommandEvent& event ){ event.Skip(); }
		virtual void doSoundToggle( wxCommandEvent& event ){ event.Skip(); }
		virtual void doGoRules( wxCommandEvent& event ){ event.Skip(); }
		virtual void doHomePage( wxCommandEvent& event ){ event.Skip(); }
		virtual void doHelpAbout( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		TMainFrame( wxWindow* parent, wxWindowID id = ID_MAINFRAME, const wxString& title = _("Leela"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,450 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL, const wxString& name = wxT("LeelaGUI") );
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class TNewGameDialog
///////////////////////////////////////////////////////////////////////////////
class TNewGameDialog : public wxDialog 
{
	DECLARE_EVENT_TABLE()
	private:
		
		// Private event handlers
		void _wxFB_doHandicapUpdate( wxSpinEvent& event ){ doHandicapUpdate( event ); }
		void _wxFB_doCancel( wxCommandEvent& event ){ doCancel( event ); }
		void _wxFB_doOK( wxCommandEvent& event ){ doOK( event ); }
		
	
	protected:
		enum
		{
			ID_NEWGAME = 1000,
			ID_KOMISPIN,
			ID_HANDICAPSPIN,
		};
		
		wxRadioBox* m_radioBoxBoardSize;
		wxStaticText* m_staticText2;
		wxSpinCtrl* m_spinCtrlKomi;
		wxStaticText* m_staticText3;
		wxSpinCtrl* m_spinCtrlHandicap;
		wxRadioBox* m_radioBoxColor;
		wxRadioBox* m_radioBoxLevel;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void doHandicapUpdate( wxSpinEvent& event ){ event.Skip(); }
		virtual void doCancel( wxCommandEvent& event ){ event.Skip(); }
		virtual void doOK( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		TNewGameDialog( wxWindow* parent, wxWindowID id = ID_NEWGAME, const wxString& title = _("New Game"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 260,250 ), long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE );
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class TAboutDialog
///////////////////////////////////////////////////////////////////////////////
class TAboutDialog : public wxDialog 
{
	DECLARE_EVENT_TABLE()
	private:
		
		// Private event handlers
		void _wxFB_doInit( wxInitDialogEvent& event ){ doInit( event ); }
		
	
	protected:
		wxStaticText* m_staticTextVersion;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText9;
		wxHyperlinkCtrl* m_hyperlink3;
		wxButton* m_button1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void doInit( wxInitDialogEvent& event ){ event.Skip(); }
		
	
	public:
		TAboutDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 230,169 ), long style = wxDEFAULT_DIALOG_STYLE );
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class TNagDialog
///////////////////////////////////////////////////////////////////////////////
class TNagDialog : public wxDialog 
{
	DECLARE_EVENT_TABLE()
	private:
		
		// Private event handlers
		void _wxFB_doInit( wxInitDialogEvent& event ){ doInit( event ); }
		void _wxFB_doOK( wxCommandEvent& event ){ doOK( event ); }
		
	
	protected:
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText81;
		wxHyperlinkCtrl* m_hyperlink1;
		wxStaticText* m_staticText10;
		wxHyperlinkCtrl* m_hyperlink2;
		wxButton* m_button2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void doInit( wxInitDialogEvent& event ){ event.Skip(); }
		virtual void doOK( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		TNagDialog( wxWindow* parent, wxWindowID id = wxID_OK, const wxString& title = _("Support Leela!"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 249,200 ), long style = wxDEFAULT_DIALOG_STYLE );
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class TCopyProtectionDialog
///////////////////////////////////////////////////////////////////////////////
class TCopyProtectionDialog : public wxDialog 
{
	DECLARE_EVENT_TABLE()
	private:
		
		// Private event handlers
		void _wxFB_doOK( wxCommandEvent& event ){ doOK( event ); }
		
	
	protected:
		wxStaticText* m_staticText12;
		wxStaticText* m_staticText14;
		wxTextCtrl* m_textCtrlName;
		wxStaticText* m_staticText15;
		wxTextCtrl* m_textCtrlCode;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		wxButton* m_sdbSizer2Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void doOK( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		TCopyProtectionDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Copy protection"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 239,159 ), long style = wxDEFAULT_DIALOG_STYLE );
	
};

#endif //__GUI__
