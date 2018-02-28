#ifndef INTEGER

#define INTEGER


#include "objects.h"

class Integer : public objects
{
private:
	int valor;

public:
	Integer(int num);
	~Integer();

	Tipo getTipo();
	void setInt(int);
	int getInt();
	void imprimir();
};

#endif // !1