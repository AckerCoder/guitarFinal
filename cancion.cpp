#include "cancion.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
cancion::cancion()
{
	size = 0;
	song = new nota[0];
}
cancion::cancion(const nota ptsToCopy[],const int toCopySize){
	size = toCopySize;
	song = new nota[toCopySize];
	for(int i = 0;i<toCopySize;i++){
		song[i] = ptsToCopy[i];
	}
}
cancion::cancion(const cancion &other){
	size = other.size;
	song = new nota[size];
	for (int i = 0;i<size;i++){
		song[i] = other.song[i];
	}
	
}
cancion::~cancion()
{
	delete[] song;
}
void cancion::resize(int newSize){
	nota *pts = new nota[newSize];
	int minSize = (newSize > size ? size : newSize);
	for(int i = 0; i<minSize;i++){
		pts[i] = song[i];
	}
	delete[] song;
	size = newSize;
	song = pts;
}
void cancion::clear(){
	resize(0);
} 
void cancion::push_back(const nota &p){
	resize(size+1);
	song[size-1] = p;
}
void cancion::insert(const int pos, const nota &p){
	resize(size+1);
	for(int i = size-1;i>pos;i--){
		song[i] = song[i-1];
	}
	song[pos] = p;
}
//voidr
