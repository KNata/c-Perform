//
//  Building.cpp
//  Exam_Kiselyk
//
//  Created by Natalia on 4/22/15.
//  Copyright (c) 2015 Home. All rights reserved.
//

#include "Building.h"
#include "BadDimention.h"

Building::Building() : _flatCount(0), _flats(new Flat*[100]), _rate(0) 
{
	#ifndef NDEBUG
#endif
};

Building::Building(int flatCount, double rate, Flat** flats) : _flatCount(flatCount), _flats(flats), _rate(rate)
{
	#ifndef NDEBUG

    for (int i = 0; i < _flatCount; i++)
    {
        _flats[i] = flats[i];
    }
#endif
};

Building::~Building()
{
    #ifndef NDEBUG
#endif
}

bool Building::addFlat(Flat& flat)
{
    if (_flatCount < 100)
    {
        _flats[_flatCount] = &flat;
        _flatCount++;
        return true;
    }
    return false;
}

double Building::calcSquare()
{
    double square = 0;
    for (int i = 0; i < _flatCount; i++)
    {
        square += _flats[i]->calcSquare();
    }
    return square;
}


double Building::priceRate()
{
    return _rate;
}

const double Building:: priceRate() const
{
    return _rate;
}

void Building::setPriceRate(double priceRate)
{
    _rate = priceRate;
}

double checkPrice();