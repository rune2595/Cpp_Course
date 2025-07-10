// --------------------- Information ----------------------
// File			: Particle.h
// Author		: Rune Dirk Willén
// Date			: 08-07-2025
// Description	: A header file for class 'Particle'.
//				  Sets up particles for particle fire
//				  simulation.
// --------------------------------------------------------
#pragma once

#include <SDL3\SDL.h> // Initializes SDL functions


namespace rdw
{

struct Particle
{
	double m_x;
	double m_y;

private:
	double m_Speed;     // Speed in pixels per second
	double m_Direction; // In degrees

	int interval; // Time interval in milliseconds

public:
	Particle();
	virtual ~Particle();
	void update(int interval);

private:
	void init();
};

}
