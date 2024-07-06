#include <iostream>
using namespace std;

int main(){

    char name[1000];
    
    for(int i = 0;i<5;i++){
        cin>>name[i];

    }
    for(char c : name){
        cout<<c;
    }
    

   //take input of random length
   
   int i =0;
    while (true) {
        cin >> name[i];
        if (name[i] == '#') {
            break;
        }
        i++;
    }
    i = 0;
    while (name[i] != '#') {
        cout << name[i];
        i++;
    }
    

    string name;
    cin>>name;
    cout<<name;
    return 0;
}
