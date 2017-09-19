#include "stdafx.h"

// constructores
Sala::Sala()
{
	//cout << "Sala creada." << endl;
}

Sala::Sala(string desc)
{
	descripcion = desc;
}

Sala::Sala(string desc, string op1, string op2)
{
	descripcion = desc;
	opcion1 = op1;
	opcion2 = op2;
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

void Sala::setDescripcion(string desc)
{
	descripcion = desc;
}

void Sala::setOpcion1(string op)
{
	opcion1 = op;
}

void Sala::setOpcion2(string op)
{
	opcion2 = op;
}

// getters
Sala* Sala::getSala1()
{
	if (sala1 != NULL)
		return sala1;
	else
		return NULL;
}

Sala* Sala::getSala2()
{
	if (sala2 != NULL)
		return sala2;
	else
		return NULL;
}

void Sala::getDescripcion()
{
	cout << descripcion << endl;
}

void Sala::getOpcion1()
{
	if (opcion1 != "")
		cout << "1) " << opcion1 << endl;
}

void Sala::getOpcion2()
{
	if (opcion2 != "")
		cout << "2) " << opcion2 << endl;
}
