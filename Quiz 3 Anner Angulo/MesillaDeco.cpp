#include "MesillaDeco.h"

MesillaDeco::MesillaDeco() : Mesilla()
{
    precio = 158000;
}

MesillaDeco::~MesillaDeco()
{
}

string MesillaDeco::toString()
{
    stringstream s;
    s << "Mesilla Art-Deco precio: " << precio << endl;
    return s.str();
}
