 #include <math.h> 
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

	// turtle.speed(ct::TS_SLOWEST);
	// turtle.fillcolor({ "purple" });
	// turtle.begin_fill();
	// for (int i = 0; i < 4; i++) {
	// 	turtle.forward(50);
	// 	turtle.right(90);
	// }
	// turtle.end_fill();
	// turtle.penup();
	// turtle.hideturtle();
	// turtle.forward(100);
	// turtle.pendown();
	// turtle.fillcolor({ "blue" });
	// turtle.write("I love Data Structures!");
  
   
  turtle.penup();
  turtle.goTo(-50, 10*sqrt(75));
  turtle.pencolor({"yellow"});
  turtle.pendown();
  turtle.fillcolor({"yellow"});
  turtle.begin_fill();
  
  // equilateral triangle for 6 pointed star
  for(int i = 0; i < 3; i++){
      turtle.forward(100);
      turtle.right(120);
  }
  turtle.end_fill();

turtle.penup();
turtle.goTo(-50, 25);
turtle.pencolor({"black"});
turtle.pendown();
turtle.fillcolor({"black"});
turtle.begin_fill();

// make triangle that is pointed up
for(int i = 0; i < 3; i++){
      turtle.forward(100);
      turtle.left(120);
}
turtle.end_fill();
string name; 
turtle.penup();

for(int i = 0; i < 3; i++){
  turtle.goTo(100, 100 - (i * 50)); 
  cin >> name;
  turtle.write(name);
}
scr.exitonclick();
}
