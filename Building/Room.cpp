//
//  Room.cpp
//  Exam_Kiselyk
//
//  Created by Natalia on 4/21/15.
//  Copyright (c) 2015 Home. All rights reserved.
//

#include "Room.h"
#include "BadDimention.h"

Room::Room(double width, double heigth) : _width(width), _heigth(heigth)
{
#ifndef NDEBUG
    if (width <= 0 || heigth <= 0) throw BadDimention("Incorrect size");

#endif
}

Room::~Room() {}

Room& Room:: operator=(const Room& room)
{
    _width = room._width;
    _heigth = room._heigth;
    return *this;
}

double& Room::width()
{
    return _width;
}

const double& Room::width() const
{
    return _width;
}

double& Room::heigth()
{
    return _heigth;
}

const double& Room::heigth() const
{
    return _heigth;
}

double Room::calcSquare()
{
    return _width * _heigth;
}

