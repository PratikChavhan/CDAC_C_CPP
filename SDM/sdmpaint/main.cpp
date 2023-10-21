#include <iostream>
using namespace std;
#include "Point.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Line.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	         
              Point p1;
               Point startpt(12,14);
               Point endpt(34,54);
               int thickness=3;
            cout<<"Co-ordinate of origin"<<":";
              p1.display();
              Line l(startpt,endpt,thickness);
              l.display();
               Square s(startpt,endpt,thickness);
              s.display();
              Rectangle r(startpt,endpt,thickness);
              r.display();
               	return 0;
               
}


