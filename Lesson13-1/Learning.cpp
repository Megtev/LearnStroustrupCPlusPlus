#include "Stroustrup\Window.h"
#include "Stroustrup\Simple_window.h"
#include "Stroustrup\Graph.h"
#include "Stroustrup\GUI.h"
#include "Stroustrup\Point.h"
#include "Stroustrup\GUI.cpp"
#include "Stroustrup\Graph.cpp"
#include "Stroustrup\Window.cpp"
#include "Stroustrup\std_lib_facilities.h"

//namespace Graph_lib {
//}


int main() {
	Point t1(100, 100);
	Simple_window win(t1, 1000, 800, "Window");
	Graph_lib::Smiley mouth(Point(500, 500), 50);
	Graph_lib::Frowny eye1(Point(400, 400), 40);
	Graph_lib::Frowny eye2(Point(600, 400), 40);
	win.attach(mouth);
	win.attach(eye1);
	win.attach(eye2);

	win.wait_for_button();
	return 0;
}