#ifndef NOTA_VERDE_H
#define NOTA_VERDE_H

#include "nota.h"

class nota_verde : public nota
{
	public:
		nota_verde();
		void dibujar();
		
		~nota_verde();
	private:
		int duracion;
		int x;
		sf::Sprite* sprite;
		sf::Texture* textura;
		
	protected:
};

#endif
