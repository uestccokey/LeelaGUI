#ifndef __AnalysisWindow__
#define __AnalysisWindow__

#include "stdafx.h"
#include "TBoardPanel.h"

/**
@file
Subclass of TAnalysisWindow, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include

/** Implementing TAnalysisWindow */
class AnalysisWindow : public TAnalysisWindow
{
	public:
		/** Constructor */
		AnalysisWindow( wxWindow* parent );
	//// end generated class members
        private:
            enum {
                ID_COPYPV = 2000,
                ID_COPYLINE,
                ID_DESELECTLINE
            };

            virtual void doClose( wxCloseEvent& event ) override;
            virtual void doUpdate( wxCommandEvent& event );
            virtual void doDeselect( wxGridEvent& event ) override;
            virtual void doLeftClick( wxGridEvent& event ) override;
            virtual void doResize( wxSizeEvent& event ) override;
            virtual void doContextMenu( wxGridEvent& event ) override;
            void onContextMenuClick(wxCommandEvent& event);
            bool mHasAutoSized{false};
            bool mHasUserSized{false};
            int mSideToMove{0};
};

#endif // __AnalysisWindow__
