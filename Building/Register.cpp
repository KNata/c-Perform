//
//  Register.cpp
//  Exam_Kiselyk
//
//  Created by Natalia on 4/22/15.
//  Copyright (c) 2015 Home. All rights reserved.
//

#include "Register.h"

Register::Register() : _premiseCount(0), _premisesRegister(new Premises*[100]) {};
Register::Register(int premiseCount, Premises** premises) : _premiseCount(premiseCount), _premisesRegister(premises)
{
    for (int i = 0; i < premiseCount; i++)
    {
        _premisesRegister[i] = premises[i];
    }
};

Register::~Register()
{
   
}

bool Register::addToRegister(Premises& premise)
{
    if (_premiseCount < 100)
    {
        _premisesRegister[_premiseCount] = &premise;
        _premiseCount++;
        return true;
    }
    return false;
}

bool Register::removeFromRegister(int anId)
{
    int numberFound = -1;
    for (int i = 0; i < _premiseCount; i++)
    {
        if (_premisesRegister[i]->getId() == anId)
        {
             numberFound = i;
            break;
        }
    }
    if (numberFound >= 0 && _premiseCount > 1)
    {
        for (int j = numberFound; j < _premiseCount-1; j++)
        {
            _premisesRegister[j] = _premisesRegister[j+1];
        }
        return true;
    }
    return false;
}