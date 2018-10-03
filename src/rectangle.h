/*! \ Fichier rectangle.h
* \ Appelle les fonctions du fichier rectangle.cpp
* \ Auteur Rayhan
* \ Version 1
*/

#pragma once

/*! \ class rectangle
* \ classe qui permet de calculer le perimetre ou l'aire d'un rectangle
* \ Auteur Rayhan
* \ Version 1
*/

class rectangle
{
public :

/*! \ Fonction perimetre pour calculer le perimetre du rectangle
* \ parametre a : cote1 sur la longueur
* \ parametre b : cote2 sur la largeur
* \ retourne le calcul ((cote1+cote2)*2)
*/

int perimetre(double cote1,double cote2);

/*! \ Fonction aire pour calculer l'aire du retangle
* \ parametre a : base du triangle
* \ parametre b : hauteur du triangle
* \ retourne le calcule ((base*hauteur)%2)
*/

int aire(double base, double hauteur);
};
