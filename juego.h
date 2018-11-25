#ifndef JUEGO_H
#define JUEGO_H
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "tablero.h"
#include "cuerda.h"
#include "nota.h"
#include "cancion.h"


class Juego:public cuerda, public tablero
{
	public:
		Juego();
		Juego(int,int,std::string);
		void gameloop();
		void dibujar();
		~Juego();
	private:
		int fps;
		sf::RenderWindow *ventana;
		sf::Texture *texture1;
		sf::Sprite *sprite1;
		//sf::Clock reloj;
		//sf::Music another;
	protected:
};

#endif
