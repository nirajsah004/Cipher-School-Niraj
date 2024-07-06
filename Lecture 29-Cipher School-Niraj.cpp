#include <iostream>
using namespace std;


class Student{
public:
    string name;
    int roll_no;
    string sur_name;

    void values(int roll_no,string name,string sur_name){
        this->name = name;
        this->roll_no = roll_no;
        this->sur_name = sur_name;
        cout<<"The address of this pointer is: "<<this<<endl; 
    }
};


int main(){

    Student s1;
    s1.values(10,"Mohit","Sharma");
    cout<<"Address of object is: "<<&s1;
    return 0;
}
