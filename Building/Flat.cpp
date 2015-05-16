//
//  Flat.cpp
//  Exam_Kiselyk
//
//  Created by Natalia on 4/22/15.
//  Copyright (c) 2015 Home. All rights reserved.
//

#include "Flat.h"

Flat::Flat() : _roomCount(0), _rooms(new Room*[100]) 
{
	#ifndef NDEBUG
#endif
};
Flat::Flat(int roomCount, Room** rooms) : _roomCount(roomCount), _rooms(rooms)
{
    #ifndef NDEBUG
#endif
};

Flat::~Flat(){};

bool Flat::addRoom(Room& room)
{
    if (_roomCount < 100)
    {
        _rooms[_roomCount] = &room;
        _roomCount++;
        return true;
    }
    return false;
}

double Flat::calcSquare()
{
    double square = 0;
     for (int i = 0; i < _roomCount; i++)
     {
         square += _rooms[i]->calcSquare();
     }
    return square;
}