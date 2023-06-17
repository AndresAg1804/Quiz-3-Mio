#include "SillaModerna.h"

SillaModerna::SillaModerna() : Silla()
{
    precio = 350000;
}

SillaModerna::~SillaModerna()
{
}

string SillaModerna::toString()
{
    stringstream s;
    s << "Silla Moderna precio: " << precio << endl;
    return s.str();
}
