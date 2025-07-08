// --------------------- Information ----------------------
// File			: Swarm.h
// Author		: Rune Dirk Willén
// Date			: 08-07-2025
// Description	: A header file for class 'Swarm'.
//				  Controls a swarm of particles for 
//				  particle fire simulation.
// --------------------------------------------------------
#pragma once

#include <SDL3\SDL.h> // Initializes SDL functions
#include "Particle.h"

namespace rdw
{

class Swarm
{
public:
	const static int NPARTICLES = 1000;

private:
	Particle* m_pParticles;

public:
	Swarm();
	virtual ~Swarm();
	void update();

	const Particle* const getParticles() { return m_pParticles; };

};

}

