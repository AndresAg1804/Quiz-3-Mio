#include "SillaVic.h"

SillaVic::SillaVic() : Silla()
{
    precio = 185000;
}

SillaVic::~SillaVic()
{
}

string SillaVic::toString()
{
    stringstream s;
    s << "Silla Victoriana precio: " << precio << endl;
    return s.str();
}
