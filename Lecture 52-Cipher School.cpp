#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int marks;

    void calc(){
        cout<<"Marks of "<<name<<" are "<<marks<<endl;
    }
    void fail(){
        if(marks<=50){

            cout<<"fail"<<endl;
        }
    }

};


int main(){

    Student a,b,c;          // instance of a class called object
    a.name = "Mohit";
    a.marks = 100;
    
    b.name = "rohan";
    b.marks = 80;

    c.name = "Simran";
    c.marks = 50;

    a.calc();
    b.calc();
    c.calc();
    a.fail();
    b.fail();
    c.fail();
    return 0;
}
