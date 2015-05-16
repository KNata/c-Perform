//
//  main.cpp
//  Exam_Kiselyk
//
//  Created by Natalia on 4/21/15.
//  Copyright (c) 2015 Home. All rights reserved.
// out test class
//

#include <iostream>
#include <stdlib.h>

#include "Room.h"
#include "Flat.h"
#include "Building.h"
#include "Premises.h"
#include "Register.h"

using namespace std;

int main(void) {
    
	// create a room
    cout<<endl;
    cout<<"Part 2: Building"<<endl;
    cout<<endl;
    Room firstRoom(300, 400);
    cout<<"Room 1 created"<<endl;
    cout<<endl;
    cout<<"Room 1 square = "<<firstRoom.calcSquare()<<endl;
    cout<<endl;
	// create a room
    Room secondRoom(112, 452);
    cout<<"Room 2 created"<<endl;
    cout<<endl;
    cout<<"Room 2 square = "<<secondRoom.calcSquare()<<endl;
    Room** rooms = new Room*[2];
    rooms[0] = &firstRoom;
    rooms[1] = &secondRoom;
    cout<<endl;
	// create a flat
    Flat theFlat(2, rooms);
    cout<<"Flat created"<<endl;
    cout<<endl;
    cout<<"Flat square = "<<theFlat.calcSquare()<<endl;
    cout<<"Room added? "<<theFlat.addRoom(firstRoom)<<endl;
    cout<<endl;
    Flat** flats = new Flat*[1];
    flats[0] = &theFlat;
    cout<<endl;
	// create a building
    Building theBuilding(1, 300, flats);
    cout<<"Building created"<<endl;
    cout<<endl;
    cout<<"Flat added? "<<theBuilding.addFlat(theFlat)<<endl;
    cout<<"Building square = "<<theBuilding.calcSquare()<<endl;
    cout<<endl;
	// create a premise
    Premises premise(3332, 1333, 2343, 12, 34);
    cout<<"Premise created"<<endl;
    cout<<endl;
    premise.setBuilding(theBuilding);
    cout<<"Set building "<<endl;
    cout<<"Premice price = "<<premise.checkPrice()<<endl;
    cout<<endl;
	// create a register
   Register theRegister;
    cout<<"Premice added? "<<theRegister.addToRegister(premise)<<endl;
    cout<<"Premice deleted? "<<theRegister.removeFromRegister(12345)<<endl;;
    
  
    system("Pause");
    return 0;
}
