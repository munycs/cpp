	//Share member variables between Derive class

	#include <iostream>
	using namespace std;	
	class AreaClass {
	protected:
		double height;
		double width;
	};
	class Rectangle : public AreaClass {
	public:
		Rectangle(double h, double w) {
			height = h;
			width = w;
		}
		double area() {
			return height * width;
		}
	};
	class Isosceles : public AreaClass {
	public:
		Isosceles(double h, double w) {
			height = h;
			width = w;
		}
		double area() {
			return 0.5 * width * height;
		 }
	};
	class cylinder : public AreaClass {
	public:
		cylinder(double h, double w) {
			height = h;
			width = w;
		}
		double area(){
		  return (2 * 3.1416 * (width/2)*(width/2))+
		  (3.1416 * width * height);
		}
	};
	int main()
	{
		Rectangle recOb(10.0, 5.0);
		Isosceles triOb(4.0, 6.0);
		cylinder  cylOb(3.0, 4.0);

		cout << "Rectangle: "<< recOb.area() << endl;
		cout << "Triangle: " << triOb.area()  << endl;
		cout << "Cylinder: " << cylOb.area()  << endl;
	} 

