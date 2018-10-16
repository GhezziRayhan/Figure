/*! \ Fichier triangle.h
* \ Appelle les variables du fichier triangle.cpp
* \ Auteur Rayhan
* \ Version 1
*/

#pragma once

/*! \ Class triangle
* \ Permet de calculer l'aire et le perimetre d'un triangle
* \ Retourne les cacules de l'air et du perimetre d'un triangle
*/

class triangle
{
public :

/*! \ Permet de calculer le perimetre
* \ parametre a : côté 1 du triangle
* \ parametre b : côté 2 du triangle
* \ parametre c : côté 3 du triangle
* \ retourne le calcul (cote1+cote2+cote3)
*/

int perimetre(double cote1, double cote2, double cote3);

/*! \ Permet de calculer l'aire
* \ parametre a : base du triangle
* \ parametre b : hauteur du triangle
* \ retourne le calcule ((base*hauteur)%2)
*/

int aire(double base, double hauteur);
};
