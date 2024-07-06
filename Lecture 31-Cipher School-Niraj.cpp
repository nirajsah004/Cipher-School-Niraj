/*
-- OBJECT ORIENTED PROGRAMMING --
-->ENCAPSULATION: Collecting similar chunks of data in a same place(class) is called encapsulation
-->ABSTRACTION: 
-->POLYMORPHISM:
-->INHERITENCE:Passing down properties from parent class aslo called as base class to children class 
               also known as  derived class is called inheritance for eg:
               -VEHICLE (Base class) --> CAR,TRUCK,BUS  (Derived Class)

*/
#include <iostream>
using namespace std;

class Vehicle{
    public:
    int wheels;
    int doors;
    int windows;
    int passengers;

    Vehicle(){
        wheels = 4;
        doors = 4;
        windows = 6;
        passengers = 5;
    }
};

// inherited the features of class vehicle to class car
class Car: public Vehicle{
    public:

    //we are getting these values from class Vehicle
    void features(){
        cout<<"No. of Vehicles are: "<<wheels<<" No. of doors are: "<<doors<<endl;
    }
};


int main(){

    Car c;
    c.features();

    return 0;
}
