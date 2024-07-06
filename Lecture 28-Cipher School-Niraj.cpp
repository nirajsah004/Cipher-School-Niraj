#include<iostream>
using namespace std;


class Student{

    public:
    string name;
    int attendance;

};
// public class
class Bank_client{
    public:
    string name;
    string password;
    int cvv;
    float credit_card;

};
//private class
class Bank_client1{
    private:
    string password;
    int cvv;
    float credit_card;

    public:
    string name;

    //declaring public funnstions get and set functions
    void set_password(string a){
        password = a;
    }
    void get_password(){
        cout<<"Our account password is: "<<password;
    }
    void set_all(int cv,int num){
        cvv = cv;
        credit_card = num;
    }


    
};
int main(){
    Bank_client a;
    Bank_client1 b;
    
    //public class
    a.name = "Mohit";
    a.password = "Hello123";
    a.cvv = 123231;
    a.credit_card = 123456789;

    //can't access private members
    // b.password = "Hello123";
    // b.cvv = 123231;
    // b.credit_card = 123456789;

    b.name = "mohit";
    b.set_password("mohit12323189");
    b.get_password();
    b.set_all(12323121,12334556);

    return 0;   
}
