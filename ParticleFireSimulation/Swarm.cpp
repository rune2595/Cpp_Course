// --------------------- Information ----------------------
// File			: Swarm.cpp
// Author		: Rune Dirk Willén
// Date			: 08-07-2025
// Description	: Implementation of the 'Swarm' class.
// --------------------------------------------------------


#include "Swarm.h"


namespace rdw
{

Swarm::Swarm()
{
	m_pParticles = new Particle[NPARTICLES];

}
Swarm::~Swarm()
{
	delete[] m_pParticles;
}
void Swarm::update()
{
    for (int i = 0; i < Swarm::NPARTICLES; i++)
    {
        m_pParticles[i].update();
    }
}

}