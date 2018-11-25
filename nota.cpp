#include "nota.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
nota::nota()
{
}
nota::nota(std::string color)
{
	if (color=="verde")
	{
		imagen.loadFromFile("imagenes/notaVerde.jpeg");
		sprite.setTexture(imagen);
		x = 20.0;
	}
	if (color=="rojo")
	{
		imagen.loadFromFile("imagenes/notaRoja.jpeg");
		sprite.setTexture(imagen);
		x = 80.0;
	}
	if (color=="amarillo")
	{
		imagen.loadFromFile("imagenes/notaAmarilla.jpeg");
		sprite.setTexture(imagen);
		x = 140.0;
	}
	if (color=="azul")
	{
		imagen.loadFromFile("imagenes/notaAzul.jpeg");
		sprite.setTexture(imagen);
		x = 200.0;
	}
	if (color=="naranja")
	{
		imagen.loadFromFile("imagenes/notaNaranja.jpeg");
		sprite.setTexture(imagen);
		x = 260.0;
	}
	y = 0;	
	
}
void nota :: movimiento(){
	y+=5;
}
nota::~nota()
{
}
