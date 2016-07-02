#include "Stroustrup\Window.h"
#include "Stroustrup\Simple_window.h"
#include "Stroustrup\Graph.h"
#include "Stroustrup\GUI.h"
#include "Stroustrup\Point.h"
#include "Stroustrup\GUI.cpp"
#include "Stroustrup\Graph.cpp"
#include "Stroustrup\Window.cpp"
#include "Stroustrup\std_lib_facilities.h"

namespace Graph_lib {
	class Smiley : public Circle {
	public:
		Smiley(Point p, int r);
		void draw_lines() const;
	private:
		int _r;
	};

	Smiley::Smiley(Point p, int r)
		:Circle(p, r), _r(r) {
		add(Point(p.x - _r +_r / 2, p.y - _r + r / 2));
	}

	void Smiley::draw_lines() const {
		fl_color(219, 112, 147);
		fl_pie(point(0).x, point(0).y, _r + _r, _r + _r, 0, 360);

		fl_color(Fl_Color(FL_BLACK));
		fl_arc(point(0).x, point(0).y, _r + _r, _r + _r, 0, 360);


		fl_color(Fl_Color(FL_RED));
		fl_pie(point(1).x, point(1).y, _r, _r + _r, 135, 405);

		fl_color(Fl_Color(FL_BLACK));
		fl_arc(point(1).x, point(1).y, _r, _r + _r, 135, 405);
	}
}


int main() {
	Point t1(100, 100);
	Simple_window win(t1, 1000, 800, "Window");
	Graph_lib::Smiley mouth(Point(300, 300), 50);
	win.attach(mouth);
	win.wait_for_button();
	return 0;
}