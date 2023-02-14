#include "util.h"
#include "animal.h"

animalObjeto::animalObjeto(int edadNuevo, float pesoNuevo, float alturaNuevo, string especieNuevo, string razaNuevo, string categoriaNuevo, string biologiaNuevo, string generoNuevo)
{
	this->edad = edadNuevo;
	this->peso = pesoNuevo;
	this->altura = alturaNuevo;
	reconversionString(this->especie, especieNuevo);
	reconversionString(this->raza, razaNuevo);
	reconversionString(this->categoria, categoriaNuevo);
	reconversionString(this->biologia, biologiaNuevo);
	reconversionString(this->genero, generoNuevo);
}

animalObjeto::~animalObjeto()
{

}

void animalObjeto::setEdad(int edadNuevo)
{
	this->edad = edadNuevo;
}

void animalObjeto::setAltura(float alturaNuevo)
{
	this->altura = alturaNuevo;
}

void animalObjeto::setPeso(float pesoNuevo)
{
	this->peso = pesoNuevo;
}

void animalObjeto::setEspecie(string especieNuevo)
{
	reconversionString(this->especie, especieNuevo);
}

void animalObjeto::setRaza(string razaNuevo)
{
	reconversionString(this->raza, razaNuevo);
}

void animalObjeto::setCategoria(string categoriaNuevo)
{
	reconversionString(this->categoria, categoriaNuevo);
}

void animalObjeto::setBiologia(string biologiaNuevo)
{
	reconversionString(this->biologia, biologiaNuevo);
}

void animalObjeto::setGenero(string generoNuevo)
{
	reconversionString(this->genero, generoNuevo);
}

int animalObjeto::getEdad()
{
	return this->edad;
}

float animalObjeto::getPeso()
{
	return this->peso;
}

float animalObjeto::getAltura()
{
	return this->altura;
}

string animalObjeto::getEspecie()
{
	return this->especie;
}

string animalObjeto::getRaza()
{
	return this->raza;
}

string animalObjeto::getCategoria()
{
	return this->categoria;
}

string animalObjeto::getBiologia()
{
	return this->biologia;
}

string animalObjeto::getGenero()
{
	return this->genero;
}

void animalObjeto::mostrar()
{
	cout << "Edad: " << this->getEdad() << endl;
	cout << "Peso: " << this->getPeso() << endl;
	cout << "Altura: " << this->getAltura() << endl;
	cout << "Especie: " << this->getEspecie() << endl;
	cout << "Raza: " << this->getRaza() << endl;
	cout << "Categoria: " << this->getCategoria() << endl;
	cout << "Biologia: " << this->getBiologia() << endl;
	cout << "Genero: " << this->getGenero() << endl << endl;
}