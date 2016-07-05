#include "Stroustrup\Window.h"
#include "Stroustrup\Simple_window.h"
#include "Stroustrup\Graph.h"
#include "Stroustrup\GUI.h"
#include "Stroustrup\Point.h"
#include "Stroustrup\GUI.cpp"
#include "Stroustrup\Graph.cpp"
#include "Stroustrup\Window.cpp"
#include "Stroustrup\std_lib_facilities.h"

/*namespace Graph_lib {
void Striped_rectangle::draw_lines() const
    {
    if (fill_color().visibility()) {    // fill
        fl_color(fill_color().as_int());
               int x = 2;
        while(true) {
                if(point(0).y + x >= point(0).y + h) 
                    break;
                fl_line(point(0).x, point(0).y + x, point(0).x + w, point(0).y + x);
                x += 2;
                }
        fl_color(color().as_int());    // reset color
    }

    if (color().visibility()) {    // edge on top of fill
        fl_color(color().as_int());
        fl_rect(point(0).x,point(0).y,w,h);
    }
    }

*/}


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