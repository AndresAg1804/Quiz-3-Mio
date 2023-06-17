#include "FabricaDeco.h"

FabricaDeco::FabricaDeco()
{
    mesilla = crearMesilla();
    silla = crearSilla();
    sofa = crearSofa();
}

FabricaDeco::~FabricaDeco()
{
}

Silla* FabricaDeco::crearSilla()
{
    return Interfaz::crearSillaDeco();
}

Mesilla* FabricaDeco::crearMesilla()
{
    return Interfaz::crearMesillaDeco();
}

Sofa* FabricaDeco::crearSofa()
{
    return Interfaz::crearSofaDeco();
}

int FabricaDeco::precioTotal()
{
    int precio = 0;
    precio = mesilla->getPrecio() + silla->getPrecio() + sofa->getPrecio();
    return precio;
}

string FabricaDeco::toString()
{
    stringstream s;
    s << mesilla->toString();
    s << silla->toString();
    s << sofa->toString();
    s << "Precio total de los muebles: " << precioTotal() << " colones\n";
    return s.str();
}
