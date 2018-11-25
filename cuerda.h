#ifndef CUERDA_H
#define CUERDA_H
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
class cuerda
{
	public:
		cuerda();
		cuerda(int,float,float);
		void dibujar();
		~cuerda();
		sf::Texture imagen;
		sf::Sprite sprite;
	protected:
};

#endif
