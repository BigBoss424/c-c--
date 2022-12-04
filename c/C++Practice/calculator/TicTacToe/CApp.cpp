#include "CApp.h"

CApp::CApp() {

    Surf_Grid = NULL;
    Surf_X = NULL;
    Surf_O = NULL;

    Surf_Display = NULL;

    Running = true;
}

int CApp::onExecute() {

    if(OnInit() == false){
        return -1;
    }
    SDL_Event Event;

    while(Running){
        while(SDL_PollEvent(&Event))
        {
            OnEvent(&Event);
        }
        OnLoop();
        OnRender();
    }
    OnCleanup();
    return 0;
}

int main(int argc, char* argv[]){
    CApp theApp;
    return theApp.onExecute();
}