#include "stdafx.h"

// clase que contiene la informacion actual del jugador. en principio, la sala en la que se encuentra
class Jugador {
	public:
		Jugador();
		Jugador(Sala* s);
		
		void setSalaActual(Sala* s);
		Sala getSalaActual();
	
	private:
		Sala* salaActual;
};