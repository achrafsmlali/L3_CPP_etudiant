#ifndef POLYREG_HPP_
#define POLYREG_HPP_
#include "Point.hpp"
#include "Couleur.hpp"
#include "FigureGeometrique.hpp"

class PolygoneRegulier:public FigureGeometrique {
private:
  int _nbPoints;
  Point * _points;

public:
 PolygoneRegulier (Couleur couleur,Point centre,int rayon,int nbCotes);
  void affiche()override;
  int getNbPoints();
  Point * getPoint();
 ~PolygoneRegulier();
};
  
#endif
