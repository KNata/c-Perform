#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <ostream>
#include "Segment.h"
#include "Point.h"


using namespace std;



class Triangle
{
private:
	Point _a;
	Point _b;
	Point _c;

	Segment _ab;
	Segment _bc;
	Segment _ca;

public:
	Triangle(const double x1 = 0, const double y1 = 0, const double x2 = 0, const double y2 = 0, const double x3 = 0, const double y3 = 0);
	Triangle (const Point& a, const Point& b, const Point& c);
	Triangle (const Point& a, const Segment& bc);
	Triangle (const Triangle& aTriangle);
	~Triangle();

	Triangle& operator=(const Triangle& triangle);
	double perimetr() const;
	double area() const;

	const Point& apexA() const;
	const Point& apexB() const;
	const Point& apexC() const;

	const Segment side_a() const;
	const Segment side_b() const;
	const Segment side_c() const;

	double length_a() const;
	double length_b() const;
	double length_c() const;

	const Segment height_a() const;
	const Segment height_b() const;
	const Segment height_c() const;

};

ostream& operator<<(ostream& os, const Segment& aSegment);

const Segment&  height_a(Triangle& aTriangle);
const Segment&  height_b(Triangle& aTriangle);
const Segment&  height_c(Triangle& aTriangle);

#endif