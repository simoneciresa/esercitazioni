//
// Created by simone.ciresa on 11/05/22.
//

#include <iostream>
#include "room.h"
using namespace std;

Room::Room(double height, double length, double width, int people){
    this->height=height;
    this->length= length;
    this->width= width;
    this->people= people;
    vital_area=4;
    vital_volume=11;
}

double Room::area() {
    return length*width;
}

double Room::volume() {
    return Room::area()*height;
}

void Room::addPerson(){
    ++people;
    return;
}

void Room::addPeople(int n) {
    (people+=n);
    return;
}

void Room::removePerson() {
    if(people>1)
        people--;
    else
        people=0;
    return;
}

void Room::removePeople(int n) {
    if(people>n)
        people-=n;
    else
        people=0;
    return;
}

void Room::empty() {
    people=0;
    return;
}

int Room::howMany() {
    cout<<"People: "<<people<<endl;
    return people;
}

bool Room::isEmpty() {
    bool empty=true;
    if(people!=0)
        empty=false;
    return empty;
}

bool Room::isFull() {
    bool full=true;
    double volume=Room::volume();
    double area=Room::area();
    if((volume/people)>vital_volume && (area/people)>vital_area)
        full=false;
    return full;
}