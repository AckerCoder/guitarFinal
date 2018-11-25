#include "tablero.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
tablero::tablero()
{
	cuerda cuerda1(1,cordxVerde,cordyGeneral);
	cuerda cuerda2(2,cordxRoja,cordyGeneral);
	cuerda cuerda3(3,cordxAmarilla,cordyGeneral);
	cuerda cuerda4(4,cordxAzul,cordyGeneral);
	cuerda cuerda5(5,cordxNaranja,cordyGeneral);
	
	guitarra[0] = cuerda1;
	guitarra[1] = cuerda2;
	guitarra[2] = cuerda3;
	guitarra[3] = cuerda4;
	guitarra[4] = cuerda5;
}

void tablero::cargarTablero()
{	

}
tablero::~tablero()
{
}
