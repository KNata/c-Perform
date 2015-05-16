#include "Triangle.h"


Triangle::Triangle(const double x1, const double y1, const double x2, const double y2, const double x3, const double y3) : 
_a(Point(x1, y1)), _b(Point(x2, y2)), _c(Point(x3, y3)), _ab(Point(x1, y1), Point(x2, y2)), _bc(Point(x2, y2), Point(x3, y3)), _ca(Point(x3, y3), Point(x1, y1)) {
	#ifndef NDEBUG

	#endif
	return;
};

Triangle::Triangle (const Point& a, const Point& b, const Point& c) : _a(a), _b(b), _c(c), _ab(a,b), _bc(b, c), _ca(c, a) {
	#ifndef NDEBUG

	#endif
	
	return;
};

Triangle::Triangle (const Point& a, const Segment& bc) : _a(a), _bc(bc), _b(bc.start()), _c(bc.end()), _ab(a, _b), _ca(_c, a)  {
	#ifndef NDEBUG

	#endif
	return;
};

Triangle::Triangle (const Triangle& aTriangle) : _a(aTriangle._a), _b(aTriangle._b), _c(aTriangle._c), _ab(aTriangle._ab), _bc(aTriangle._bc), 
	_ca(aTriangle._ca) {
		#ifndef NDEBUG

	#endif
	return;
};
	Triangle::~Triangle()
	{
		delete &_ab;
		delete &_bc;
		delete &_ca;
	}
	
	Triangle& Triangle:: operator=(const Triangle& triangle)
	{
		_a = triangle._a;
		_b = triangle._b;
		_c = triangle._c;
		_ab = triangle._ab;
		_bc = triangle._bc;
		_ca = triangle._ca;

		return *this;
	}

	double Triangle:: perimetr() const
	{
		return side_a().length() + side_b().length() + side_c().length();
	}

	double Triangle:: area() const
	{
		return 0.5 * side_a().length() * side_a().distance(_a);
	}

	const Point& Triangle:: apexA() const
	{
		return _a;
	}

	const Point& Triangle:: apexB() const
	{
		return _b;
	}

	const Point& Triangle:: apexC() const
	{
		return _c;
	}

	const Segment Triangle:: side_a() const
	{
		return Segment(_b, _c);
	}

	const Segment Triangle::side_b() const
	{
		return Segment(_c, _a);
	}

	const Segment Triangle:: side_c() const
	{
		return Segment(_a, _b);
	}

	double Triangle::length_a() const
	{
		return _ab.length();
	}

	double Triangle:: length_b() const
	{
		return _bc.length();
	}

	double Triangle:: length_c() const
	{
		return _ca.length();
	}

	const Segment  Triangle:: height_a() const
	{
		double halfPerimert =  (_ab.length() + _bc.length() + _ca.length())/2;
		double square = sqrt(halfPerimert*(halfPerimert - _ab.length()) * (halfPerimert - _bc.length()) * (halfPerimert - _ca.length()));
		double h = 2*square/_bc.length();
		double k = (_bc.endY() - _bc.startY() / _bc.endX() - _bc.startX());
		double b1 = k * _bc.startX() + _bc.startY();
		double b2 = (-1.0 / k) * _a.x() + _a.y();
		double xResult = (b2 - b1) / (k + 1.0/k);
		double yResult = k * xResult + b1;
		return Segment(xResult, yResult);
	}

	const Segment Triangle:: height_b() const
	{
		double halfPerimert =  (_ab.length() + _bc.length() + _ca.length())/2;
		double square = sqrt(halfPerimert*(halfPerimert - _ab.length()) * (halfPerimert - _bc.length()) * (halfPerimert - _ca.length()));
		double h = 2*square/_ca.length();
		double k = (_ca.endY() - _ca.startY() / _ca.endX() - _ca.startX());
		double b1 = k * _ca.startX() + _ca.startY();
		double b2 = (-1.0 / k) * _b.x() + _b.y();
		double xResult = (b2 - b1) / (k + 1.0/k);
		double yResult = k * xResult + b1;
		return Segment(xResult, yResult);
	}

	const Segment Triangle ::height_c() const
	{
		double halfPerimert =  (_ab.length() + _bc.length() + _ca.length())/2;
		double square = sqrt(halfPerimert*(halfPerimert - _ab.length()) * (halfPerimert - _bc.length()) * (halfPerimert - _ca.length()));
		double h = 2*square/_ab.length();
		double k = (_ab.endY() - _ab.startY() / _ab.endX() - _ab.startX());
		double b1 = k * _ab.startX() + _ab.startY();
		double b2 = (-1.0 / k) * _c.x() + _c.y();
		double xResult = (b2 - b1) / (k + 1.0/k);
		double yResult = k * xResult + b1;
		return Segment(xResult, yResult);
	}


ostream& operator<<(ostream& os, const Triangle& aTriangle)
{
	os<<'('<<aTriangle.apexA().x()<<", "<<aTriangle.apexA().y()<<'), ('<<aTriangle.apexB().x()<<", "<<aTriangle.apexB().y()<<'), ('<<aTriangle.apexC().x()<<", "<<aTriangle.apexC().y()<<')';
	return os;
}

	const Segment& height_a(Triangle& aTriangle) 
	{
		return aTriangle.height_a();
	}

	
const Segment&  height_b(Triangle& aTriangle)
{
	return aTriangle.height_b();
}

const Segment&  height_c(Triangle& aTriangle)
{
	return aTriangle.height_c();
}
