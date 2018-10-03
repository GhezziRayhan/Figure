#include "figure.h"
#include <iostream>
using namespace std;

class triangle : public figure{
int perimetre(double cote1, double cote2, double cote3);
int aire(double base, double hauteur);
};

class disque : public figure{
double perimetre(double , double);
double aire(double , double);
};

class rectangle : public figure{
int perimetre(double cote1, double cote2);
int aire(double base, double hauteur);
};

