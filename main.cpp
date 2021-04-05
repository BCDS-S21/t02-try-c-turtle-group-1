 /* File:   main_CTurtle.cpp
 * Original Author:  Jesse W. Walker with modifications by Jan Pearce, 2019
 * Modified by: FIXME
 */

#include "CTurtle.hpp";   //This brings in the CTurtle library for use
namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::
#include <iostream> //for input & output
using namespace std; //this makes it possible to use cin and cout without std::


int main() {
	ct::TurtleScreen scr;

	scr.bgcolor({ "white" });
	ct::Turtle turtle(scr);

	turtle.speed(ct::TS_SLOWEST);
	turtle.fillcolor({ "purple" });
	turtle.begin_fill();
	for (int i = 0; i < 4; i++) {
		turtle.forward(50);
		turtle.right(90);
	}
	turtle.end_fill();
	turtle.penup();
	turtle.hideturtle();
	turtle.forward(100);
	turtle.pendown();
	turtle.fillcolor({ "blue" });
	turtle.write("I love Data Structures!");


	scr.exitonclick();  //exists graphics screen
	return 0;
}
