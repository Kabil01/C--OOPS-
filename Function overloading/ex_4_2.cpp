/*2.Write a program that demonstrates function overloading by defining two functions with the same name but different types of parameters.*/

#include <iostream>
using namespace std;

void display(int a){
	cout<<"This function accepted the datatype integer "<<a<<endl;
}

void display(double b){
	cout<<"This function accepted the datatype double "<<b<<endl;
}

int main(){
	int a=7;
	double b=3.14;
	display(a);
	display(b);
}

/*
This function accepted the datatype integer 7
This function accepted the datatype double 3.14
*/
