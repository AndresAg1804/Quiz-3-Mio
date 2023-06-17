#include "SofaModerno.h"

SofaModerno::SofaModerno() : Sofa()
{
    precio = 2100000;
}

SofaModerno::~SofaModerno()
{
}

string SofaModerno::toString()
{
    stringstream s;
    s << "Sofa Moderno precio: " << precio << endl;
    return s.str();
}
