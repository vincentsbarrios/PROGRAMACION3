#pragma once

enum Tipo { T_Char, T_String, T_Int };

class objects
{
public:
	objects();
	virtual Tipo getTipo() = 0;
	virtual void imprimir() = 0;
};

