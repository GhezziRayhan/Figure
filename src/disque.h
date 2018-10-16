/*! \ Fichier disque.h
* \ Appelle les fonctions du fichier disque.cpp
* \ Auteur Rayhan
* \ Version 1
*/

#pragma once

/*! \ Class disque
* \ Permet de calculer le périmètre et laire d'un disque
* \ Retourne les cacules de l'air et du perimetre d'un disque
*/

class disque
{
public :

/*! \ Permet de caculer le périmètre du cercle
* \ parametre a : Nombre PI = 3.14
* \ parametre b : Rayon du cercle
* \ retourne le calcul ((pi*rayon)/2)
*/

double perimetre(double pi, double rayon);

/*! \ Permet de calculer l'aire du cercle
* \ paramètre a : Nombre PI = 3.14
* \ paramètre b : Rayon du cercle
* \ retourne le calcule (pi*(rayon*rayon), le calcul retourne une valeur arrondit mais je n'arrive pas à additionner le modulo % pour ajouter la valeur manquante
*/

double aire(double pi, double rayon);
};
