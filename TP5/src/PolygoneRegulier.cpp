#include <iostream>
#include "PolygoneRegulier.hpp"
#include <cmath>
#define PI 3.14159265

PolygoneRegulier::PolygoneRegulier(Couleur couleur,Point centre,int rayon,int nbCotes):
  FigureGeometrique(couleur) ,_nbPoints(nbCotes+1)//il contien le centre auusi si tu l enleve noublie pas la boucle 
{
  _points = new Point[nbCotes+1];
  double pas=360/nbCotes;
  double angle=0;
  _points[0]=centre;
  for(int i=1;i<nbCotes+1;i++ ){
    _points[i]=Point{int((cos(angle*PI/180)*rayon)+centre._x),int((sin(angle*PI/180)*rayon)+centre._y)};
    angle=angle+pas;
  }
}

void PolygoneRegulier::affiche(){
    std::cout<<"PolygoneRegulier ";
    std::cout<<PolygoneRegulier::getCouleur()._r<<"_"<<PolygoneRegulier::getCouleur()._g<<"_"<<PolygoneRegulier::getCouleur()._b;
    
    for(int i=1;i<_nbPoints;i++ ){
      std::cout <<" "<<_points[i]._x<<"_"<<_points[i]._y;
  }
    std::cout<<std::endl;
}

int PolygoneRegulier::getNbPoints(){return _nbPoints;}
Point * PolygoneRegulier::getPoint(){ return _points;}

PolygoneRegulier::~PolygoneRegulier(){
  
      delete _points;
  
    }
