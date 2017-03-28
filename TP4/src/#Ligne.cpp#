# include <iostream>
#include "Ligne.hpp"
#include "Point.hpp"
#include "Couleur.hpp"

Ligne::Ligne(Couleur couleur,Point p0,Point p1):FigureGeometrique(couleur),_p0(p0),_p1(p1){}
void Ligne::affiche(){
  std::cout<<"ligne ";
  std::cout<<Ligne::getCouleur()._r<<"_"<<Ligne::getCouleur()._g<<"_"<< Ligne::getCouleur()._b;
  std::cout <<" "<<_p0._x<<"_"<<_p0._y;
  std::cout<<" "<<_p1._x<<"_"<<_p1._y<<std::endl;
    }
Point Ligne::getP0()const{return _p0;}
Point Ligne::getP1()const{return _p1;}
