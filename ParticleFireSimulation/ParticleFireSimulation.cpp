// --------------------- Project Information ---------------------
// Project		: ParticleFireSimulation
// Author		: Rune Dirk Willén
// Date			: 04-07-2025
// Description	: A particle fire simulator.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include <SDL3\SDL.h> // Initializes SDL functions
#include "ScreenGraphics.h"
using namespace std;
using namespace rdw;

int main()
{

    ScreenGraphics screen;

    if (screen.init() == false)
    {
        cout << "Error initializing graphics!" << endl;
    }

    // Set exit condition for "game loop"
    bool quit = false;
    
    // Initialize "game loop", used by games and GUI programs to keep displaying
    while (true)
    {
        // Update particles
        // Draw particles
        // Check for messages/events

        if (screen.processEvents() == false)
        {
            break;
        }
    }

    screen.close();

    return 0;
}
