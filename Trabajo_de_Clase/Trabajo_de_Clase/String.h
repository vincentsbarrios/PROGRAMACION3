#ifndef STRING

#define STRING


#include "objects.h"
#include <string>

using namespace std;

class String : public objects
{
private:
	string valor;

public:
	String(string);
	~String();

	Tipo getTipo();
	void setString(string);
	string getString();
	void imprimir();

};

#endif // !1

