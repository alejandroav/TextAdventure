#include "stdafx.h"
using namespace std;

// clase que contiene las salas del mapa
class Sala {

	public:
		// constructores, setters, getters
		Sala();
		Sala(string& desc);
		Sala(Sala* s1, Sala* s2, string* desc);

		void setSala1(Sala* s);
		void setSala2(Sala* s);
		void setDescripcion(string* desc);

		Sala getSala1();
		Sala getSala2();
		string getDescripcion();

	private:
		// variables para almacenar las salas siguientes
		Sala* sala1;
		Sala* sala2;

		// datos sobre la sala actual
		string* descripcion;
};