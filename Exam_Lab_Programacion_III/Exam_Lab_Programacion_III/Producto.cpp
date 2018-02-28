#include "Producto.h"



Producto::Producto(int c, string n, float p, Producto *v)
{
	cantidad = c;
	nombre = n;
	precio = p;
	sig = v;

	Producto *temp;
	temp->setCantidad(c);
	temp->setNombre(n);
	temp->setPrecio(p);
		
	if (primero == NULL) {
		
	}

}

void Producto::sumaTotal() {
	if (NULL) {

	}
}

void Producto::setCantidad(int _cantidad) {
	cantidad = _cantidad;
}
void Producto::setNombre(string _nombre) {
	nombre = _nombre;
}
void Producto::setPrecio(float _precio) {
	precio = _precio;
}
void Producto::setSig(Producto *valor) {
	sig = valor;
}

int Producto::getCantidad() {
	return cantidad;
}
string Producto::getNombre() {
	return nombre;
}
float Producto::getPrecio() {
	return precio;
}
Producto *Producto::getSig() {
	return sig;
}




