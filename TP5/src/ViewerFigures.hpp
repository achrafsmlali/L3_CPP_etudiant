#ifndef VIEWERFIGURES_HPP_
#define VIEWERFIGURES_HPP_
#include <gtkmm.h>



class ViewerFigures{

  Gtk::Main _kit;
  Gtk::Window _window;

public:
  ViewerFigures(int argc ,  char ** argv);
  void run();
  
};




#endif

