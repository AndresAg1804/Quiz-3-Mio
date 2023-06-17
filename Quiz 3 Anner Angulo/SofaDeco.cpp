#include "SofaDeco.h"

SofaDeco::SofaDeco() : Sofa()
{
    precio = 875000;
}

SofaDeco::~SofaDeco()
{
}

string SofaDeco::toString()
{
    stringstream s;
    s << "Sofa Art-Deco precio: " << precio << endl;
    return s.str();
}
