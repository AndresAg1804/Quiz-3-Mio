#include "SofaVic.h"

SofaVic::SofaVic() : Sofa()
{
    precio = 1200000;
}

SofaVic::~SofaVic()
{
}

string SofaVic::toString()
{
    stringstream s;
    s << "Sofa Victoriana precio: " << precio << endl;
    return s.str();
}
