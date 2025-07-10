// --------------------- Information ----------------------
// File			: Particle.cpp
// Author		: Rune Dirk Willén
// Date			: 08-07-2025
// Description	: Implementation of the 'Particle' class.
// --------------------------------------------------------

#include "Particle.h"
#include <stdlib.h>
#include <corecrt_math_defines.h>

using namespace std;

namespace rdw
{

Particle::Particle(): m_x(0), m_y(0), interval(0)
{
	init();
}
void Particle::init()
{
	m_x = 0;
	m_y = 0;
	m_Direction = (2 * M_PI * rand()) / RAND_MAX;
	m_Speed = (0.02 * rand()) / RAND_MAX;

	m_Speed *= m_Speed; // Squaring the speed to increase the effect
}
Particle::~Particle()
{

}
void Particle::update(int interval)
{	
	m_Direction += interval * 0.0003; // Adjust the direction based on the interval

	double speedX = m_Speed * cos(m_Direction);
	double speedY = m_Speed * sin(m_Direction);

	m_x += speedX * interval;
	m_y += speedY * interval;

	if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1) // Check if the particle is out of bounds
	{
		init(); // Reinitialize the particle if it is out of bounds
	}

	if (rand() < RAND_MAX / 1000)
	{
		init(); // Randomly reinitialize the particle
	}
}

}