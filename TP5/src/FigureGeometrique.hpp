#ifndef FIG_HPP_
#define FIG_HPP_
#include "Couleur.hpp"
class FigureGeometrique {
private:
  Couleur _couleur;
public:
  FigureGeometrique(Couleur couleur );
   Couleur getCouleur()const;
   virtual void affiche();
  virtual ~FigureGeometrique()=default;//maitre default au lieu de definir un corp vide dans le cpp
};
#endif
