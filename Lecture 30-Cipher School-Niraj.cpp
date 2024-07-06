/*a constructor which is called whenever a new object is created  
  it is basically a function which dosent has any return type and same name as class name
  
    now there are diffrent type of constructors like parametrized constructor,

  A destructor is used to destroy the constructor called we just need to add "~" in front of the constructor
  */  
#include <iostream>
using namespace std;

class Complex{
    private:
    float real;
    float img;
    
    public:
    void setParameters(int real,int img){
        this->real = real;
        this->img = img; 
    }

    //called constructor to initialize the value of variable
    Complex(int real,int img){
        this->img = img;
        this->real = real;
    }

    void SqdistancefromOrigin(){
        float dist;
        dist =  real*real + img*img;
        cout<<"The distance from origin is: "<<dist<<endl;
    }
};
class New_Account{

    public:
    int amount;
    int day;

    //making function to initialize value to zero
    // // if we dont call it every time this willl make code output as garbage value so it makes it hectic
    // void initial(){
    //     amount = 0;
    //     day = 0;
    // }
    //created a constructor which is called whenever a new object is created  
    
    New_Account(){
        amount = 0;
        day = 0;
        cout<<"Constructor called: "<<endl;
    }

    ~New_Account(){
        cout<<"Destructor called: "<<endl;
    }

};

int main(){
    Complex c(10.4,20.5);

    //c.setParameters(3.4,4.5);
    c.SqdistancefromOrigin();

    New_Account n1,n2;

    return 0;
}
