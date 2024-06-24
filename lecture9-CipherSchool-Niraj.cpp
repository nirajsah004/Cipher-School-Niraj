#include <iostream>
using namespace std;
int main() {
    int a[5];
    int i;
    cout<<"Give 5 integers as input"<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    for(i=5;i>=0;i--){
        cout<<a[i]<<" ";
    }

    return 0;
}
