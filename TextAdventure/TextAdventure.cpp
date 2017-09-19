#include "stdafx.h"

void generarAventura()
{
	// generar todas las salas
	Sala inicio(string("Despiertas en una sala oscura. Tu cabeza se siente pesada, y no recuerdas nada."), string("Te levantas."), string("Te quedas tumbado."));
	Sala mazmorra(string("Cuando tus ojos se acostumbran a la oscuridad, descubres que te encuentras en una celda."));
	Sala muerte(string("Tu falta de determinación es digna de admiración. Tras unos días, mueres de hambre."));
	
	// asignar salas a las opciones correspondientes de la sala anterior
	inicio.setSala1(&mazmorra);
	inicio.setSala2(&muerte);

	// generamos al jugador
	Jugador jugador(&inicio);
}

int main()
{
	generarAventura();
	cout << "Fin." << endl;
    return 0;
}

