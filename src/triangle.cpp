#include "triangle.h"
#include <iostream>
using namespace std;

int triangle::perimetre(double cote1, double cote2, double cote3){

return (cote1+cote2+cote3);
}

int triangle::aire(double base, double hauteur){

return ((base*hauteur)/2);
}
