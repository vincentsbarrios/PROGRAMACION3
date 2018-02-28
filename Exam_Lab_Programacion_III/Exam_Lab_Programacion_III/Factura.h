#include "Fecha.h"
#include "Producto.h"
#include <string>

using namespace std;

class Factura : public Fecha 
{
private:
	Fecha facturacion;
	string cliente;
	Producto *pointer;

public:

	Factura(string);
	void agregar_productos(double precio, int cantidad);
	void obtenerTotal();
};

