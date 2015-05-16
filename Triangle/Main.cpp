#include <ostream>
#include <stdlib.h>

#include "Point.h"
#include "Segment.h"
#include "Triangle.h"

using namespace std;

int main(void)
{
	Point a(3.432, 2.0);
	Point b(32.8, 8.0);
	Point d(2.0, 7.0);
	Point c(b);
	cout<<"Point a ("<<a.x()<<", "<<a.y()<<")"<<endl;
	cout<<"Point b ("<<b.x()<<", "<<b.y()<<")"<<endl;
	cout<<" --------------------------------------- "<<endl;
	Segment side1(a, b);
	Segment side2(2.6, 7.0, 8.9, 9.1);
	
	double segmentDistance = side1.distance(c);
	cout<<"side 1: distance = "<<segmentDistance<<endl;
	 
	double segmentLength = side1.length();
	cout<<"side 1: length = "<<segmentLength<<endl;
	cout<<" --------------------------------------- "<<endl;
	Triangle *triangle1 = new Triangle(a, b, d);

	double triangle_lengthA = triangle1->length_a();
	cout<<"triangle_lengthA = "<<triangle_lengthA<<endl;

	double triangle_lengthB = triangle1->length_b();
	cout<<"triangle_lengthB = "<<triangle_lengthB<<endl;
	//cout<<"triangle_lengthC = "<<endl;
	double triangle_lengthC = triangle1->length_c();
	cout<<"triangle_lengthC = "<<triangle_lengthC<<endl;
	cout<<" --------------------------------------- "<<endl;
	Segment heighthTriangleA = triangle1->height_a();
	cout<<"heighthTriangleA = "<<heighthTriangleA<<endl;

	Segment heighthTriangleB = triangle1->height_b();
	cout<<"heighthTriangleB = "<<heighthTriangleB<<endl;

	Segment heighthTriangleC = triangle1->height_c();
	cout<<"heighthTriangleC = "<<heighthTriangleC<<endl;
	cout<<" --------------------------------------- "<<endl;

	Point w(3.0, 1.0);
	Point q(4.0, 10.0);
	Point z(43.0, 8.0);
	Point h(z);
	cout<<"Point a ("<<w.x()<<", "<<w.y()<<")"<<endl;
	cout<<"Point b ("<<q.x()<<", "<<q.y()<<")"<<endl;
	cout<<" --------------------------------------- "<<endl;
	Segment side3(w, q);
	Segment side4(5.0, 6.0, 3.0, 9.0);
	
	double segmentDistance1 = side4.distance(c);
	cout<<"side 1: distance = "<<segmentDistance1<<endl;
	 
	double segmentLength1 = side4.length();
	cout<<"side 1: length = "<<segmentLength1<<endl;
	cout<<" --------------------------------------- "<<endl;
	Triangle *triangle2 = new Triangle(w, q, z);

	double triangle_lengthA1 = triangle2->length_a();
	cout<<"triangle_lengthA = "<<triangle_lengthA1<<endl;

	double triangle_lengthB1 = triangle2->length_b();
	cout<<"triangle_lengthB = "<<triangle_lengthB1<<endl;
	
	double triangle_lengthC1 = triangle2->length_c();
	cout<<"triangle_lengthC = "<<triangle_lengthC1<<endl;
	cout<<" --------------------------------------- "<<endl;
	Segment heighthTriangleA1 = triangle2->height_a();
	cout<<"heighthTriangleA = "<<heighthTriangleA1<<endl;

	Segment heighthTriangleB1 = triangle2->height_b();
	cout<<"heighthTriangleB = "<<heighthTriangleB<<endl;

	Segment heighthTriangleC1 = triangle2->height_c();
	cout<<"heighthTriangleC = "<<heighthTriangleC1<<endl;
	cout<<" --------------------------------------- "<<endl;
	
	system("Pause");
	return 0;
}