#include <iostream>
#include "room.h"
using namespace std;
int main() {
    int people=15;
    Room stanza1(10,20,30,people);
    double area= stanza1.area();
    double volume=stanza1.volume();

    stanza1.addPeople(7);
    stanza1.howMany();
    stanza1.removePeople(6);
    stanza1.howMany();
    stanza1.empty();
    stanza1.howMany();
    bool empty= stanza1.isEmpty();
    if(empty==1)
        cout<<"Room is empty"<<endl;
    stanza1.addPeople(148);
    bool full= stanza1.isFull();
    if(full==1)
        cout<<"Room is full"<<endl;
    if(!stanza1.isEmpty())
        stanza1.empty();
    stanza1.howMany();


    cout<<"area: "<<area<<endl;
    cout<<"volume: "<<volume<<endl;

    return 0;
}
