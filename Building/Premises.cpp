//
//  Preises.cpp
//  Exam_Kiselyk
//
//  Created by Natalia on 4/22/15.
//  Copyright (c) 2015 Home. All rights reserved.
//

#include "Premises.h"
#include "BadDimention.h"


Premises::Premises(int anId, double areaWidth, double areaHeigth, double arPrice, double bPrice) : _id(anId), _areaHeigth(areaHeigth),
	_areaWidth(areaWidth), _areaRate(arPrice), _buildingRate(bPrice), _building(NULL)
{
    if (areaWidth <= 0 || areaHeigth <= 0) throw BadDimention("Incorrect size");
    
};

Premises::Premises(int anId, double areaWidth, double areaHeigth, Building& building, double arPrice, double bPrice) :
_id(anId), _areaWidth(areaWidth), _areaHeigth(areaHeigth), _building(&building), _areaRate(arPrice), _buildingRate(bPrice) {
    if (areaWidth <= 0 || areaHeigth <= 0) throw BadDimention("Incorrect size");
};



Premises::~Premises() {}

int Premises::getId()
{
    return _id;
}

const int Premises::getId() const
{
    return _id;
}

Building& Premises::building()
{
    return *_building;
}

void Premises::setBuilding(Building& building)
{
    _building = &building;
}


double Premises::checkPrice()
{
    double areaSquare = _areaHeigth * _areaWidth;
    double areaPrice = areaSquare * _areaRate;
    if (_building != NULL)
    {
        areaPrice += _building->calcSquare()*_buildingRate;
    }
    return areaPrice;
}

