#include "util.h"
#include "domicilio.h"

domicilioObjeto::domicilioObjeto(string calleNuevo, int numeroNuevo, string localidadNuevo)
{
	reconversionString(this->calle, calleNuevo);
	this->numero = numeroNuevo;
	reconversionString(this->localidad, localidadNuevo);
}

domicilioObjeto::~domicilioObjeto()
{

}

void domicilioObjeto::setCalle(string calleNuevo)
{
	reconversionString(this->calle, calleNuevo);
}

void domicilioObjeto::setNumero(int numeroNuevo)
{
	this->numero = numeroNuevo;
}

void domicilioObjeto::setLocalidad(string localidadNuevo)
{
	reconversionString(this->localidad, localidadNuevo);
}

string domicilioObjeto::getCalle()
{
	return this->calle;
}

int domicilioObjeto::getNumero()
{
	return this->numero;
}

string domicilioObjeto::getLocalidad()
{
	return this->localidad;
}

void domicilioObjeto::mostrar()
{
	cout << "Domicilio: " << getCalle() << ", " << getNumero() << ", " << getLocalidad() << endl;
}