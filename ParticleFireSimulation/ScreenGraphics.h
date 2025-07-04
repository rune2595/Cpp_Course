// --------------------- Information ----------------------
// File			: ScreenGraphics.h
// Author		: Rune Dirk Willén
// Date			: 04-07-2025
// Description	: A header file for class 'ScreenGraphics'.
//				  Sets up the graphics for particle fire
//				  simulation.
// --------------------------------------------------------
#pragma once

#include <SDL3\SDL.h> // Initializes SDL functions


namespace rdw
{

class ScreenGraphics
{
public:
	// Define constants for window size
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;


private:
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
	SDL_Texture* m_texture;
	Uint32* m_buffer;

public:
	ScreenGraphics();
	bool init();
	bool processEvents();
	void close();


};

}
