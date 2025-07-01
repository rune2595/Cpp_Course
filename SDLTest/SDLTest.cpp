// --------------------- Project Information ---------------------
// Project		: SDLTest
// Author		: Rune Dirk Willén
// Date			: 01-07-2025
// Description	: A program that tests the initialization of SDL3.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include <SDL3\SDL.h>
using namespace std;

int main()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL initialization failed!" << endl;
        return 1;
    }

    cout << "SDL initialization succeeded!" << endl;

    SDL_Quit();

    return 0;
}

