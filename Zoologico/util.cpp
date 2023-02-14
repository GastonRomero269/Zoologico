#include "util.h"

PtrDato obtenerMemoria(size_t tamanio) 
{
    PtrDato punteroGenerico = malloc(tamanio);
    if (punteroGenerico == NULL)
    {
        cout << "Memoria insuficiente" << endl;
        exit(1);
    }
    return punteroGenerico;
}

string reconversionString(string n, string m)
{
    n.resize(m.length());
    n.swap(m);
    return n;
}


void limpiadoGeneral()
{
    fflush(stdin);
    system("cls");
    fflush(stdin);
}