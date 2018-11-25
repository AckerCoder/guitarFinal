#include "juego.h"
#include "cuerda.h"
#include "tablero.h"
Juego::Juego()
{
}
Juego::Juego(int resolucion_x,int resolucion_y,std::string titulo)
{
	fps =60;
	ventana = new sf::RenderWindow(sf::VideoMode(resolucion_x,resolucion_y),titulo);
	ventana->setFramerateLimit(fps);
	gameloop();
}
void Juego::gameloop()
{
	while(ventana->isOpen()){
		dibujar();
		sf::Event event;
        while (ventana->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                ventana->close();
        }
	}
}
void Juego::dibujar()
{
//	another.openFromFile("canciones/aobtd.mp3");
	ventana->clear();
	tablero tab;
	sf::Event evento1;
	while(ventana->pollEvent(evento1)){
	
	for(int i = 0;i<5;i++){
	if(evento1.type == sf::Event::KeyPressed){
		if(evento1.key.code==sf::Keyboard::A)
			ventana->draw(tab.guitarra[0].sprite);
		if(evento1.key.code==sf::Keyboard::S)
			ventana->draw(tab.guitarra[1].sprite);
		if(evento1.key.code==sf::Keyboard::D)
			ventana->draw(tab.guitarra[2].sprite);
		if(evento1.key.code==sf::Keyboard::J)
			ventana->draw(tab.guitarra[3].sprite);
		if(evento1.key.code==sf::Keyboard::K)
			ventana->draw(tab.guitarra[4].sprite);
	}
	}
}
	ventana->display();
//	another.play();
}
Juego::~Juego()
{
}
