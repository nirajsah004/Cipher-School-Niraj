//use of conditional statements using and ,or operators
#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	int d;
	
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	//conditional statement of a,b,c,d using and operator
	//in boolean statement c++ interprets false as 0
	
	cout<<(a>b && c>d)<<endl;
	//in c++ interprets true as 1
	cout<<(a>b || c>d);
  return 0;
	}
