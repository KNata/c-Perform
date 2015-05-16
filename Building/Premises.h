//
//  Preises.h
//  Exam_Kiselyk
//
//  Created by Natalia on 4/22/15.
//  Copyright (c) 2015 Home. All rights reserved.
//

#ifndef __Exam_Kiselyk__Preises__
#define __Exam_Kiselyk__Preises__

#include <stdio.h>
#include "Building.h"

class Premises
{
    
private:
    double _id;
    double _areaWidth;
    double _areaHeigth;
    double _areaRate;
    double _buildingRate;
    
    Building* _building;
    
    Premises(const Premises& premises);
    Premises& operator=(const Premises& premises);
    
public:
    Premises(int anId, double areaWidth, double areaHeigth, double arPrice, double bPrice);
    Premises(int anId, double areaWidth, double areaHeigth, Building& _building, double arPrice, double bPrice);

    ~Premises();
    
    int getId();
    const int getId() const;
    
    Building& building();
    void setBuilding(Building& building);
    
    double checkPrice();
    
};
#endif /* defined(__Exam_Kiselyk__Preises__) */
