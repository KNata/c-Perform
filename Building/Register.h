//
//  Register.h
//  Exam_Kiselyk
//
//  Created by Natalia on 4/22/15.
//  Copyright (c) 2015 Home. All rights reserved.
//

#ifndef __Exam_Kiselyk__Register__
#define __Exam_Kiselyk__Register__

#include <stdio.h>
#include "Premises.h"

class Register
{
private:
    Premises** _premisesRegister;
    int _premiseCount;
    
       
public:
    Register();
    Register(int premiseCount, Premises** premises);
    ~Register();
    
    bool addToRegister(Premises& premise);
    bool removeFromRegister(int anId);
    
};

#endif /* defined(__Exam_Kiselyk__Register__) */
