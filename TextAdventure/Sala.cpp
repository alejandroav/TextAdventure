#include "stdafx.h"
#include "Sala.h"

// constructores
Sala::Sala() {
	cout << "Sala creada." << endl;
}

Sala::Sala(string & desc)
{
	descripcion = &desc;
	cout << descripcion << endl;
}

Sala::Sala(Sala * s1, Sala * s2, string * desc)
{
	sala1 = s1;
	sala2 = s2;
	descripcion = desc;
}

// setters
void Sala::setSala1(Sala * s)
{
	sala1 = s;
}

void Sala::setSala2(Sala * s)
{
	sala2 = s;
}

void Sala::setDescripcion(string * desc)
{
	descripcion = desc;
}

// getters
Sala Sala::getSala1()
{
	return *sala1;
}

Sala Sala::getSala2()
{
	return *sala2;
}

string Sala::getDescripcion()
{
	return *descripcion;
}
