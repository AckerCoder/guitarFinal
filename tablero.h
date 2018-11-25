#ifndef TABLERO_H
#define TABLERO_H
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "cuerda.h"
class tablero: public cuerda
{
	public:
		tablero();
		void cargarTablero();
		
		sf::Texture imagenTrastes;
		sf::Sprite sprite;
		
		~tablero();
		
		float cordyGeneral = 600.0;
		float cordxVerde = 20.0;
		float cordxRoja = 80.0;
		float cordxAmarilla = 140.0;
		float cordxAzul = 200.0;
		float cordxNaranja = 260.0;
		cuerda *guitarra = new cuerda[5];
		
		
		
	protected:
};

#endif
