#ifndef CHAR

#define CHAR


#include "Integer.h"

class Char : public objects
{
private:
	char valor;

public:
	Char(char);
	~Char();

	void setChar(char);
	char getChar();
	Tipo getTipo();
	void imprimir();

};

#endif // !1