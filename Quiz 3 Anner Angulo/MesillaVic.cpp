#include "MesillaVic.h"

MesillaVic::MesillaVic() : Mesilla()
{
    precio = 575000;
}

MesillaVic::~MesillaVic()
{
}

string MesillaVic::toString()
{
    stringstream s;
    s << "Mesilla Victoriana precio: " << precio << endl;
    return s.str();
}
