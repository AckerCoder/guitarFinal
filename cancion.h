#ifndef CANCION_H
#define CANCION_H
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "nota.h"
class cancion:public nota
{
	public:
		cancion();
		cancion ( const nota pts [], const int size );
		cancion ( const cancion &pv);
		void clear ();
		int getSize () const { return size ;}
		void push_back ( const nota &p);
		void insert ( const int pos , const nota &p);
		void remove ( const int pos );
		nota *get( const int pos);
		const nota *get( const int pos) const ;
		~cancion();
	protected:
	private:
		nota *song;
		int size;
		void resize(int size);
		
};

#endif
