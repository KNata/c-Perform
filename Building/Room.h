//
//  Room.h
//  Exam_Kiselyk
//
//  Created by Natalia on 4/21/15.
//  Copyright (c) 2015 Home. All rights reserved.
//

#ifndef __Exam_Kiselyk__Room__
#define __Exam_Kiselyk__Room__

#include <stdio.h>


class Room
{
private:
    double _width;
    double _heigth;
    
    Room(const Room& room);
    
public:
    Room(double width, double heigth);
    
    ~Room();
    
    Room& operator=(const Room& room);
    
    double& width();
    const double& width() const;
    
    double& heigth();
    const double& heigth() const;
    
    double calcSquare();
};


#endif /* defined(__Exam_Kiselyk__Room__) */
