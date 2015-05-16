//
//  Building.h
//  Exam_Kiselyk
//
//  Created by Natalia on 4/22/15.
//  Copyright (c) 2015 Home. All rights reserved.
//

#ifndef __Exam_Kiselyk__Building__
#define __Exam_Kiselyk__Building__

#include <stdio.h>
#include "Flat.h"

class Building
{
    
private:
    double _rate;

    Flat** _flats;
    int _flatCount;
    
    
    Building(const Building& building);
    Building& operator=(const Building& building);
    
public:
    Building();
    Building(int flatCount, double rate, Flat** flats);
    ~Building();
    
    bool addFlat(Flat& flat);
    
    double priceRate();
    const double priceRate() const;
    void setPriceRate(double priceRate);
    
    double calcSquare();
    double checkPrice();
};

#endif /* defined(__Exam_Kiselyk__Building__) */
