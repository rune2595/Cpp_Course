// --------------------- Information ----------------------
// File			: Particle.cpp
// Author		: Rune Dirk Willén
// Date			: 08-07-2025
// Description	: Implementation of the 'Particle' class.
// --------------------------------------------------------

#include "Particle.h"
#include <stdlib.h>

namespace rdw
{

Particle::Particle()
{
	m_x = ((2.0 * rand()) / RAND_MAX) - 1;
	m_y = ((2.0 * rand()) / RAND_MAX) - 1;

	m_xspeed = 0.0001 * (((2.0 * rand()) / RAND_MAX) - 1);
	m_yspeed = 0.0001 * (((2.0 * rand()) / RAND_MAX) - 1);
}
Particle::~Particle()
{

}
void Particle::update()
{
	m_x += m_xspeed;
	m_y += m_yspeed;

	if (m_x < -1.0 || m_x >= 1.0)
	{
		m_xspeed = -m_xspeed;
	}
	if (m_y < -1.0 || m_y >= 1.0)
	{
		m_yspeed = -m_yspeed;
	}

}

}