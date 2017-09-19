#include "Jugador.h"

Jugador::Jugador()
{
	cout << "Jugador creado." << endl;
}

Jugador::Jugador(Sala * s)
{
	salaActual = s;
}

void Jugador::setSalaActual(Sala * s)
{
	salaActual = s;
}

Sala Jugador::getSalaActual()
{
	return *salaActual;
}
