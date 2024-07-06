/*
    STL(Standart Template Library)
    VECTOR - an array whoose size is not fixed and will allocate space after every insertion
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    cout<<"Size of vector before inserting elements: "<<vec.size()<<endl;
    for(int i = 1;i<=5;i++){
        vec.push_back(i);
    }
    cout<<"Size of vector after inserting the elements: "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"Size of vector after pooping the elements: "<<vec.size()<<endl;

    for(auto j = vec.begin();j != vec.end();j++){
        cout<<*j<<" ";
    }

    cout<<"Capacity of vector: "<<vec.capacity()<<endl;


    return 0;
}
