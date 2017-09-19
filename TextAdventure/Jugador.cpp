#include "stdafx.h"

// constructores
Jugador::Jugador()
{
	cout << "Jugador creado." << endl;
}

Jugador::Jugador(Sala* s)
{
	salaActual = s;
	explorar();
}

// setter y getter
void Jugador::setSalaActual(Sala* s)
{
	salaActual = s;
}

Sala Jugador::getSalaActual()
{
	return *salaActual;
}

// ciclo principal del juego, donde el jugador avanza de sala en sala
void Jugador::explorar() {
	// mostrar el texto correspondiente
	salaActual->getDescripcion();
	salaActual->getOpcion1();
	salaActual->getOpcion2();
	
	int opcion = 0;
	
	// comprobamos que estamos en una sala y que tiene opciones
	if (salaActual != NULL && salaActual->getSala1() != NULL && salaActual->getSala2() != NULL) {
		
		// recibir opcion por teclado
		while (opcion == 0) {
			cout << "Decide: ";
			cin >> opcion;

			switch (opcion) {
				case 1: salaActual = salaActual->getSala1(); break;
				case 2: salaActual = salaActual->getSala2(); break;
				default: opcion = 0; break;
			}
		}
	}

	// si no, fin
	else {
		return;
	}
	
	// continuamos la exploracion
	explorar();
}
