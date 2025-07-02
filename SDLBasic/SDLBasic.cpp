// --------------------- Project Information ---------------------
// Project		: SDLBasic
// Author		: Rune Dirk Willén
// Date			: 02-07-2025
// Description	: A program exploring pixel control in SDL3.
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

    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);

    // Create texture
    SDL_Texture* texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

    // Quit if renderer is not created
    if (renderer == NULL)
    {
        cout << "Could not create renderer" << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }

    // Quit if texture is not created
    if (texture == NULL)
    {
        cout << "Could not create texture" << endl;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 4;
    }

    // Allocate memory for pixels
    Uint32* buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

    // Write pixel info into buffer (using hexadecimal notation, '0x' is a prefix letting the interpreter know it is in fact hexadecimal)
    // 0xFF indicates white
    memset(buffer, 0xFF, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

    // Update, clear, render, and present the texture
    SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH * sizeof(Uint32));
    SDL_RenderClear(renderer);
    SDL_RenderTexture(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

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

    // Clear buffer memory
    delete[] buffer;

    // Destroy texture first as it is using renderer
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);

    // Destroy window and exit
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
