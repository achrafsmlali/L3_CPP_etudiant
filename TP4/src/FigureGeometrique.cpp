#include <iostream>
#include "FigureGeometrique.hpp"
#include "Couleur.hpp"

FigureGeometrique::FigureGeometrique(Couleur couleur ):_couleur(couleur){}
Couleur FigureGeometrique::getCouleur()const{return _couleur;}
void FigureGeometrique::affiche(){};
