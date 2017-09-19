#include "stdafx.h"

// clase que contiene la informacion actual del jugador. en principio, la sala en la que se encuentra
class Jugador
{
	public:
		// constructores, setters, getters
		Jugador();
		Jugador(Sala* s);
		
		void setSalaActual(Sala* s);
		Sala getSalaActual();
		void explorar();
	
	private:
		Sala* salaActual;
};