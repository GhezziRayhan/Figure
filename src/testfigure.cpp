/*! \ Fichier testfigure.cpp
* \ Fichier main ! Il utilise les librairies.h.
* \ Auteur Rayhan
* \ Version 1
*/

#include "figure.h"
#include "rectangle.h"
#include "triangle.h"
#include "disque.h"
#include <iostream>
using namespace std;

/*! \ Fonction main
* \ Ne possède pas de parametre
* \ Possede plusieurs variable qui vont être utilisées pour les fonctions perimetre et triangle
* \ Elle retourne les calcules pour tout les fichiers.cpp rectangle/disque/triangle mais avec une marge d'erreur selon le calcul à cause de l'arrondissement du à un/des int et le manque du modulo pour combler cela
*/

int main(){

	float base, pi, hauteur, rayon, cote1, cote2, cote3;

	base = 5;
	pi = 3,14;
	hauteur = 8;
	rayon = 10;
	cote1 = 4;
	cote2 = 6;
	cote3 = 5;

	triangle t;
	rectangle r;
	disque d;

	cout<<d.perimetre(pi,rayon)<<endl;
	cout<<d.aire(pi,rayon)<<endl;

	cout<<r.perimetre(cote1,cote2)<<endl;
	cout<<r.aire(base,hauteur)<<endl;

	cout<<t.perimetre(cote1,cote2,cote3)<<endl;
	cout<<t.aire(base,hauteur)<<endl;

	return 0;
}
