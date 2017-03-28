#ifndef ZONEDESSIN_HPP_
#define ZONEDESSIN_HPP_
#include "FigureGeometrique.hpp"
#include <vector>
#include <gtkmm.h>


class ZoneDessin :public Gtk::DrawingArea {

  std::vector<FigureGeometrique*> _figures;
public:
  ZoneDessin();
   ~ZoneDessin();

protected:
  //  bool on_expose_event(GdkEventExpose* event);
  // bool gererClic(GdkEventButton* event);
};



#endif
