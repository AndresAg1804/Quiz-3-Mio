#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Silla {
protected:
	int precio;
public:
	Silla();
	virtual ~Silla();
	int getPrecio();
	virtual string toString() = 0;
};

