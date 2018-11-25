#ifndef NOTA_H
#define NOTA_H
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
class nota
{
	public:
		nota();
		nota(std::string);
		void movimiento();
		void dibujar();
		float x;
		float y;
		sf::Texture imagen;
		sf::Sprite sprite;
		~nota();
	protected:
};

#endif
