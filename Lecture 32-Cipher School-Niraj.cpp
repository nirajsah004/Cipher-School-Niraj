/*
-->INHERITENCE:Passing down properties from parent class aslo called as base class to children class 
               also known as  derived class is called inheritance for eg:
               -VEHICLE (Base class) --> CAR,TRUCK,BUS  (Derived Class)

               MODES OF INHERITANCE:-
               -PUBLIC(we can access the members of the class directly)         
               -PRIVATE(we can't access the members of class directly we need to use get set functions) 
               -PROTECTED(Makes data only accessible to derived class) 

                TYPES OF INHERITANCE:-
                -SINGLE: When a single class inherit the base class is called sigle inheritance
                -MULTILEVEL: When  class inherit single base class one after another is called multiple inheritance

*/
#include <iostream>
using namespace std;

class Vehicle{
    protected:          // here now our data is protectd as we are using protected access specifier
    int wheels;
    int doors;
    int windows;
    int passengers;
    int mileage;
    Vehicle(){
        wheels = 4;
        doors = 4;
        windows = 6;
        passengers = 5;
    }
};

class Car: private Vehicle{
    public:

    void features(){
        cout<<"No. of Vehicles are: "<<wheels<<" No. of doors are: "<<doors<<endl;
    }

    void set_mileage(int mileage){
        this->mileage = mileage;
    }

    void calculateMileage(){
        cout<<"Mileage of our vehicle is: "<<mileage;
    }
};


int main(){

    Car c;
    c.set_mileage(100); // setting values in class Vehincle when our base class is private
    c.calculateMileage();

    return 0;
}
