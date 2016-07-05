#include "Stroustrup\Window.h"
#include "Stroustrup\Simple_window.h"
#include "Stroustrup\Graph.h"
#include "Stroustrup\GUI.h"
#include "Stroustrup\Point.h"
#include "Stroustrup\GUI.cpp"
#include "Stroustrup\Graph.cpp"
#include "Stroustrup\Window.cpp"
#include "Stroustrup\std_lib_facilities.h"

/*
namespace Graph_lib {	
}
*/

int main() {
	Point t1(100, 100);
	Simple_window win(t1, 1000, 800, "Window");
	Graph_lib::Striped_rectangle rec(Point(200, 100), Point(700, 300));
	rec.set_fill_color(Color(Color::red));
	win.attach(rec);

	win.wait_for_button();
	return 0;
}