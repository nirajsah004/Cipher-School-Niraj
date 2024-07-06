/*
Polymorphism: we perform method overloading and overriding in this to perform polymorphism

    method overloading is when we make same function with diffrent parameters 

Abstraction: means to hide the details that are not required for user to know

*/
#include <iostream>
using namespace std;

class Coordinate{
    public:
    float a,b;

    Coordinate operator+(Coordinate const& obj){
        Coordinate z;
        z.a = this->a + obj.a;
        z.b = this->b + obj.b;
        return z;
    }


    void sqr_dist_from_quardinate(float a){         //method overloading
        float dist;

        dist = (this->a - a)*(this->a - a)-(this->b - a)*(this->b - a);
    
        cout<<dist<<endl;
    }
    void sqr_dist_from_quardinate(float a, float b){        //method overloading
        float dist;

        dist = (this->a - a)*(this->a - a)-(this->b - b)*(this->b - b);
    
        cout<<dist<<endl;
    }
};


int main(){

    Coordinate c;
    c.a = 100;
    c.b = 20;
    // c.sqr_dist_from_quardinate(0,0);

    Coordinate d;
    d.a =1;
    d.b = 2;
    Coordinate z;
    z = c+d;

        cout<<z.a<<" "<<z.b<<endl;
    return 0;
}
