#include "SillaDeco.h"

SillaDeco::SillaDeco() : Silla()
{
    precio = 235000;
}

SillaDeco::~SillaDeco()
{
}

string SillaDeco::toString()
{
    stringstream s;
    s << "Silla Art-Deco precio: " << precio << endl;
    return s.str();
}
