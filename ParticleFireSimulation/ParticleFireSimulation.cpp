// --------------------- Project Information ---------------------
// Project		: ParticleFireSimulation
// Author		: Rune Dirk Willén
// Date			: 04-07-2025
// Description	: A particle fire simulator.
// ---------------------------------------------------------------

// Add necessary headers and namespaces
#include <iostream>
#include <SDL3\SDL.h> // Initializes SDL functions
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "ScreenGraphics.h"
#include "Particle.h"
#include "Swarm.h"
using namespace std;
using namespace rdw;

int main()
{
    srand(time(NULL));

    // Particle Fire Simulation
    ScreenGraphics screen;

    if (screen.init() == false)
    {
        cout << "Error initializing graphics!" << endl;
    }

    Swarm swarm;

    // Initialize "game loop", used by games and GUI programs to keep displaying
    while (true)
    {
        // Update particles
        int elapsed = SDL_GetTicks();
        swarm.update(elapsed);

        // Draw particles
        unsigned char red   = (1 + sin(elapsed * 0.0001)) * 128;
        unsigned char green = (1 + sin(elapsed * 0.0002)) * 128;
        unsigned char blue  = (1 + sin(elapsed * 0.0003)) * 128;

        const Particle* const pParticles = swarm.getParticles();
        for (int i = 0; i < Swarm::NPARTICLES; i++)
        {
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * ScreenGraphics::SCREEN_WIDTH / 2;
            int y = particle.m_y * ScreenGraphics::SCREEN_WIDTH / 2 + ScreenGraphics::SCREEN_HEIGHT / 2;

            screen.setPixel(x, y, red, green, blue);
        }
        
		// Blur the screen
		screen.boxBlur(1, 1);

        // Draw the screen
        screen.update();
            
        // Check for messages/events
        if (screen.processEvents() == false)
        {
            break;
        }
    }

    screen.close();

    return 0;
}
