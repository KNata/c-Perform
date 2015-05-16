#include "Segment.h"
#include <cmath>
#include <cassert>

Segment::Segment(double x1, double y1, double x2, double y2) : _start(x1, y1), _end(x2, y2), _myID(++_freeID) {
	#ifndef NDEBUG

	#endif
	return;
};
Segment::Segment(const Point& start, const Point& end) : _start(start), _end(end), _myID(++_freeID) {
	#ifndef NDEBUG

	#endif
	return;
};
Segment::Segment(const Segment& segment) : _start(segment.start()), _end(segment.end()), _myID(++_freeID) {
	#ifndef NDEBUG

	#endif
	return;
};
	Segment::~Segment()
	{
		delete &_start.x();
		delete &_start.y();
		delete &_end.x();
		delete &_end.y();
	}

	Segment& Segment:: operator=(const Segment& segment)
	{
		_start = segment.start();
		_end = segment.end();
		return *this;
	}

	const Point& Segment:: start() const
	{
		return _start;
	}

	const Point& Segment:: end() const
	{
		return _end;
	}

	Point& Segment:: start()
	{
		return (*this).start();
	}

	Point& Segment:: end()
	{
		return (*this).end();
	}

	const double& Segment::startX() const 
	{
		return (*this).start().x();
	}

	const double& Segment:: startY() const
	{
		return (*this).start().y();
	}

	const double& Segment:: endX() const
	{
		return (*this).end().x();
	}

	const double& Segment:: endY() const
	{
		return (*this).end().y();
	}

	double& Segment:: startX()
	{
		return _start.x();
	}

	double& Segment:: startY()
	{
		return _start.y();
	}

	double& Segment:: endX()
	{
		return _end.x();
	}

	double& Segment:: endY()
	{
		return _end.y();
	}

	double Segment:: length() const
	{
		double theResult = (sqrt((_start.x() - _end.x() ) * (_start.x() - _end.x()) + (_start.y() - _end.y()) * (_start.y() - _end.y())));
		return theResult;
	}

	double Segment:: distance(const Point& aPoint) const
	{
		double a = (_start.x() == _end.x() ? 0 : 1 / (_end.x() - _start.x()));
		double b = (_end.y() == _start.y() ? 0 : 1 / (_start.y() - _end.y()));
		double c = - _start.x() * a - _start.y() * b;

		assert((a != 0) || (b != 0));

		if (b == 0) 
		{
			return fabs(-c / a - aPoint.y());
		}
		else if (a == 0)
		{
			return fabs(-c / b - aPoint.x());
		}
		else
		{
			return fabs((a * aPoint.x() + b * aPoint.y() + c) / sqrt(pow(a, 2) + pow(b, 2)));
		}
	}

	const int Segment:: getID()
	{
		return _myID;
	}

	ostream& operator<<(ostream& os, const Segment& aSegment)
	{
		os<<'('<<aSegment.startX()<<', '<<aSegment.startY()<<'), ('<<aSegment.endX()<<', '<<aSegment.endY()<<')';
		return os;
	}