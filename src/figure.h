/*! \ Fichier figure.h
* \ Appelle les fonctions des fichiers rectangle.cpp/rectangle.cpp/triangle.cpp
* \ Auteur Rayhan
* \ Version 1
*/

#pragma once

/*! \ Class figure
* \ Utilise l'héritage, la class appelera les fonctions dans les fichiers.cpp qui détiennent les fonctions perimetre/air.
* \ Fonction a : fonction perimetre, utilise les paramètres et codes des fichiers.cpp appelés
* \ Fonction b : fonction air, pareil que pour la fonction perimetre mais avec l'air
* \ Retourne donc les calcules de l'air et perimetre de l'objet demandé
*/

class figure
{
public :
int perimetre();
int aire();
};
