#include <iostream>
#include<stack>
#include <queue>
#include<map>
#include<list>

using namespace std;

int main(){
    //stack
    stack<int> a;

    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    
    cout<<a.top()<<endl;
    a.pop();
    cout<<a.top()<<endl;


    // queue
    queue<int> b;

    b.push(10);
    b.push(40);
    b.push(30);
    b.push(20);
    b.push(1000);


    cout<<"Front element is: "<<b.front()<<endl;
    b.pop();
    cout<<"Front element is: "<<b.front()<<endl;
    b.pop();
    b.pop();
    cout<<"Front element is: "<<b.front()<<endl;
    cout<<"Last element is: "<<b.back()<<endl;

    //Map
    map<int,string> hash;

    hash[1] = "Mohit";
    hash[5] = "Sharma";
    hash[4] = "Cipher Schools";
    hash[2] = "Lpu";


    cout<<"Value at  1 and 5 are: "<<hash[1]<<" "<<hash[5]<<endl;

    for(auto j=hash.begin();j!=hash.end();j++){
        cout<<"The key value pair are: "<<j->first<<" "<<j->second<<endl;
    }


    //List
    list<int> c;
    c.push_back(4);
    c.push_front(1);
    c.push_back(3);

    c.pop_back();
    c.pop_front();

    c.sort();
    for(auto i = c.begin();i!=c.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}
