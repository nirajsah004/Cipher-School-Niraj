#include<iostream>
using namespace std;
int main(){
	float a;
	float b;
	
	cin>>a>>b;
	if(a>0.01 || b>a){
		cout<<"the statement is correct in given condition";
			}else{
				cout<<"the statement is wrong";
			}
			return 0;
	}

//marks conditional statement using if-else condition
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"student,please enter the marks to calculate the grade: ";
	cin>>marks;
	if(marks>90){
		cout<<"A";
	}
	else if(marks>80){
		cout<<"B";
	}
	else if(marks>70){
		cout<<"C";
	}
	else{
		cout<<"PASS";
	}
	}

//implementation of switch case statement
#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	switch(num){
		case 1:
			cout<<"the value of a is 1";
			break;
		case 2:
			cout<<"the value of a is 2";
			break;
		case 3:
			cout<<"the value of a is is 3";
			default:
				cout<<"default will be always printed";
	}
	}
