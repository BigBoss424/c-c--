/***************************************************************
 * Name:      LearningwxWidgetsMain.h
 * Purpose:   Defines Application Frame
 * Author:    Aaron Jones (ajones0612392@yahoo.com)
 * Created:   2023-02-09
 * Copyright: Aaron Jones (https://www.cogswebdevelopmentandhosting.com)
 * License:
 **************************************************************/

#ifndef LEARNINGWXWIDGETSMAIN_H
#define LEARNINGWXWIDGETSMAIN_H

//(*Headers(LearningwxWidgetsFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class LearningwxWidgetsFrame: public wxFrame
{
    public:

        LearningwxWidgetsFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~LearningwxWidgetsFrame();

    private:

        //(*Handlers(LearningwxWidgetsFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(LearningwxWidgetsFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(LearningwxWidgetsFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // LEARNINGWXWIDGETSMAIN_H
