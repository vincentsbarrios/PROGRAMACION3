#include <string>
using namespace std;

class Producto
{
private:
	int cantidad;
	string nombre;
	float precio;

	Producto *sig;

public:
	Producto(int,string,float, Producto *);

	void setCantidad(int);
	void setNombre(string);
	void setPrecio(float);
	void setSig(Producto *);

	int getCantidad();
	string getNombre();
	float getPrecio();
	Producto* getSig();

};

