#ifndef CAPP_H_INCLUDED
#define CAPP_H_INCLUDED

#include <SDL.h>
#include "CEvent.h"
#incldue "CSurface.h"

class CApp : public CEvent {
private:
    bool Running;
    SDL_Surface* Surf_Display;
private:
    SDL_Surface* Surf_Grid;
    SDL_Surface* Surf_X;
    SDL_Surface* Surf_O;
public:
    CApp();
    int onExecute();
    void OnEvent(SDL_Event* Event);
        void OnExit();
    void OnLoop();
    void OnRender();
    void OnCleanup();
};

#endif // CAPP_H_INCLUDED
