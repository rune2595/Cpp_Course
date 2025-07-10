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
	const static int NPARTICLES = 5000;

private:
	Particle* m_pParticles;
	int lastTime; // Used to calculate elapsed time

public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsedTime);

	const Particle* const getParticles() { return m_pParticles; };

};

}

