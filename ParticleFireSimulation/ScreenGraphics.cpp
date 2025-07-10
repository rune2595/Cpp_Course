// --------------------- Information ----------------------
// File			: ScreenGraphics.cpp
// Author		: Rune Dirk Willén
// Date			: 04-07-2025
// Description	: Implementation of the 'ScreenGraphics' 
//				  class.
// --------------------------------------------------------

#include "ScreenGraphics.h"

namespace rdw
{

ScreenGraphics::ScreenGraphics() : m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer(NULL), m_blurBuffer(NULL)
{


}

bool ScreenGraphics::init()
{
    // Check if SDL3 initializes correctly
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        return false;
    }

    // Create SDL window
    m_window = SDL_CreateWindow("Particle Fire Explosion", SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_MAXIMIZED);

    // Quit if window is not created
    if (m_window == NULL)
    {
        SDL_Quit();
        return false;
    }

    // Create renderer
    m_renderer = SDL_CreateRenderer(m_window, NULL);

    // Create texture
    m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

    // Quit if renderer is not created
    if (m_renderer == NULL)
    {
        SDL_DestroyWindow(m_window);
        SDL_Quit();
        return false;
    }

    // Quit if texture is not created
    if (m_texture == NULL)
    {
        SDL_DestroyRenderer(m_renderer);
        SDL_DestroyWindow(m_window);
        SDL_Quit();
        return false;
    }

    // Allocate memory for pixels
    m_buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
    m_blurBuffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

    // Write pixel info into buffer (using hexadecimal notation, '0x' is a prefix letting the interpreter know it is in fact hexadecimal)
    // 0xFF indicates white
    memset(m_buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
    memset(m_blurBuffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

   	return true;
}
void ScreenGraphics::boxBlur(int rows, int columns)
{
	// Swap buffers for blurring, pixel is in m_blurBuffer and drawn to m_buffer
    Uint32* temp = m_buffer;
    m_buffer = m_blurBuffer;
	m_blurBuffer = temp;

    for (int y = 0; y < SCREEN_HEIGHT; y++)
    {
        for (int x = 0; x < SCREEN_WIDTH; x++)
        {
			/* Box blur algorithm, blurs through averaging the pixels around the current pixel
             * 
             *  0 0 0
             *  0 1 0
             *  0 0 0
             */
            
			int redTotal = 0;
			int greenTotal = 0;
			int blueTotal = 0;

            for (int row = -rows; row <= rows; row++)
            {
                for (int column = -columns; column <= columns; column++)
                {
                    int currentX = x + column;
                    int currentY = y + row;

					// Check if pixel is within bounds
                    if (currentX >= 0 && currentX < SCREEN_WIDTH && currentY >= 0 && currentY < SCREEN_HEIGHT)
                    {
						Uint32 color = m_blurBuffer[currentY * SCREEN_WIDTH + currentX];

						// Extract color components from pixel
						Uint8 red = color >> 24;
						Uint8 green = color >> 16;
						Uint8 blue = color >> 8;

						redTotal += red;
						greenTotal += green;
						blueTotal += blue;
                    }
                }
            }
            
			// Calculate average color values
            Uint8 red = redTotal / ((2*rows+1) * (2*columns+1));
			Uint8 green = greenTotal / ((2 * rows + 1) * (2 * columns + 1));
			Uint8 blue = blueTotal / ((2 * rows + 1) * (2 * columns + 1));
            

			setPixel(x, y, red, green, blue);
        }
    }
}
void ScreenGraphics::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue)
{
    if (x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT)
    {
        return;
    }

    Uint32 color = 0;

    color += red;
    color <<= 8;
    color += green;
    color <<= 8;
    color += blue;
    color <<= 8;
    color += 0xFF;

	// Format: // 0xRRGGBBAA, where RR is red, GG is green, BB is blue, and AA is alpha (opacity)

    m_buffer[(y * SCREEN_WIDTH) + x] = color;
}
void ScreenGraphics::update()
{
    // Update, clear, render, and present the texture
    SDL_UpdateTexture(m_texture, NULL, m_buffer, SCREEN_WIDTH * sizeof(Uint32));
    SDL_RenderClear(m_renderer);
    SDL_RenderTexture(m_renderer, m_texture, NULL, NULL);
    SDL_RenderPresent(m_renderer);
}
bool ScreenGraphics::processEvents()
{
    // Create event to be processed
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        if (event.type == SDL_EVENT_QUIT)
        {
            return false;
        }
    }
    
    return true;
}
void ScreenGraphics::close()
{
    // Clear buffer memory
    delete[] m_buffer;
	delete[] m_blurBuffer;

    // Destroy texture first as it is using renderer
    SDL_DestroyTexture(m_texture);
    SDL_DestroyRenderer(m_renderer);

    // Destroy window and exit
    SDL_DestroyWindow(m_window);
    SDL_Quit();
}


}


