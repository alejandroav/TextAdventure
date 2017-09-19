#include "stdafx.h"
using namespace std;

// clase que contiene las salas del mapa
class Sala
{
	public:
		// constructores, setters, getters
		Sala();
		Sala(string desc);
		Sala(string desc, string op1, string op2);

		void setSala1(Sala* s);
		void setSala2(Sala* s);
		void setDescripcion(string desc);
		void setOpcion1(string op);
		void setOpcion2(string op);

		Sala* getSala1();
		Sala* getSala2();
		void getDescripcion();
		void getOpcion1();
		void getOpcion2();

	private:
		// variables para almacenar las salas siguientes
		Sala* sala1;
		Sala* sala2;
		string opcion1;
		string opcion2;

		// datos sobre la sala actual
		string descripcion;
};