/***************************************************************
 * Name:      LearningwxWidgetsApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Aaron Jones (ajones0612392@yahoo.com)
 * Created:   2023-02-09
 * Copyright: Aaron Jones (https://www.cogswebdevelopmentandhosting.com)
 * License:
 **************************************************************/

#include "LearningwxWidgetsApp.h"

//(*AppHeaders
#include "LearningwxWidgetsMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(LearningwxWidgetsApp);

bool LearningwxWidgetsApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	LearningwxWidgetsFrame* Frame = new LearningwxWidgetsFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
