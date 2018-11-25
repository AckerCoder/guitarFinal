#include "cuerda.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
cuerda::cuerda()
{
}
cuerda::cuerda(int color,float posx,float posy){
	if (color == 1){
		imagen.loadFromFile("imagenes/notaVerde.jpeg");
		sprite.setTexture(imagen);
	}
	if (color == 2){
		imagen.loadFromFile("imagenes/notaRoja.jpeg");
		sprite.setTexture(imagen);
	}
	if (color == 3){
		imagen.loadFromFile("imagenes/notaAmarilla.jpeg");
		sprite.setTexture(imagen);
	}
	if (color == 4){
		imagen.loadFromFile("imagenes/notaAzul.jpeg");
		sprite.setTexture(imagen);
	}
	if (color == 5){
		imagen.loadFromFile("imagenes/notaNaranja.png");
		sprite.setTexture(imagen);
	}
	sprite.setPosition(posx,posy);
}
cuerda::~cuerda()
{
}
