//
// Created by simone.ciresa on 11/05/22.
//

#ifndef CLASSI_ROOM_H
#define CLASSI_ROOM_H


class Room {
private:
    double height;
    double length;
    double width;
    int people;
    double vital_volume;
    double vital_area;

public:
    Room(double height, double length, double width, int people);

    double area();
    double volume();
    void addPerson();
    void addPeople(int n);
    void removePerson();
    void removePeople(int n);
    void empty();
    int howMany();
    bool isEmpty();
    bool isFull();


};


#endif //CLASSI_ROOM_H
