# include <iostream>
#include "Ligne.hpp"
#include "Point.hpp"
#include "Couleur.hpp"
#include "PolygoneRegulier.hpp"
#include <vector>

#include "ZoneDessin.hpp"


ZoneDessin::ZoneDessin(){
 Couleur c{1,0,0};
  Point p0{0,0};
  Point p1{100,200};
   Ligne l{c,p0,p1};
  //l.affiche();
   
  Couleur c2{0,1,0};
  Point p2{100,200};

  PolygoneRegulier p{c2,p2,50,5};
  // p.affiche();

  _figures.push_back(&l);
  _figures.push_back(&p);
}

ZoneDessin::~ZoneDessin(){
   for(int i=0;i<(int)_figures.size();i++){
      delete _figures[i]; 
  }
  }
/*bool ZoneDessin::on_expose_event(GdkEventExpose* event){
  for(int i=0;i<(int)_figures.size();i++){
     _figures[i]->affiche(); 
  }
  return true;
  }*/
