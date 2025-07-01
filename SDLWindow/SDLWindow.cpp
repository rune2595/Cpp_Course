// --------------------- Project Information ---------------------
// Project		: SDLWindow
// Author		: Rune Dirk Willén
// Date			: 01-07-2025
// Description	: A program that initializes a window in SDL3.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include <SDL3\SDL.h> // Initializes SDL functions
using namespace std;

int main()
{
    
    // Define constants for window size
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    // Check if SDL3 initializes correctly
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL initialization failed!" << endl;
        return 1;
    }

    // Create SDL window
    SDL_Window* window = SDL_CreateWindow("Particle Fire Explosion", SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_MAXIMIZED);

    // Quit if window is not created
    if (window == NULL)
    {
        SDL_Quit();
        return 2;
    }

    // Set exit condition for "game loop"
    bool quit = false;

    // Create event to be processed
    SDL_Event event;

    // Initialize "game loop", used by games and GUI programs to keep displaying
    while (!quit)
    {
        // Update particles
        // Draw particles
        // Check for messages/events

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                quit = true;
            }
        }
    }

    // Destroy window and exit
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

