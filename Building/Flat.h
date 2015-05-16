//
//  Flat.h
//  Exam_Kiselyk
//
//  Created by Natalia on 4/22/15.
//  Copyright (c) 2015 Home. All rights reserved.
//

#ifndef __Exam_Kiselyk__Flat__
#define __Exam_Kiselyk__Flat__

#include <stdio.h>
#include "Room.h"

class Flat
{
    
private:
    
    Room** _rooms;
    
    int _roomCount;
    
    Flat(const Flat& flat);
    Flat& operator=(const Flat& flat);
    
public:
    Flat();
    Flat(int roomCount, Room** rooms);
    ~Flat();
    
    double square();
    bool addRoom(Room& room);
    bool removeRoom(Room& room);
    
    double calcSquare();
};


#endif /* defined(__Exam_Kiselyk__Flat__) */
