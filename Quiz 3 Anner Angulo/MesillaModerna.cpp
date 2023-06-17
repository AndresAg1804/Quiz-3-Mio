#include "MesillaModerna.h"

MesillaModerna::MesillaModerna() : Mesilla()
{
    precio = 950000;
}

MesillaModerna::~MesillaModerna()
{
}

string MesillaModerna::toString()
{
    stringstream s;
    s << "Mesilla Moderna precio: " << precio << endl;
    return s.str();
}
