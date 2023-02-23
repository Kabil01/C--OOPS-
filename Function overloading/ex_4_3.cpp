/*3.Write a program that demonstrates function overloading by defining two functions with the same name but different const-ness of parameters.*/

#include <iostream>
using namespace std;

void display(char *a){
	cout<<"This executes non constant function "<<a<<endl;
}

void display(const char *b){
	cout<<"This executes constant function "<<b<<endl;
}

int main(){
	char *a="OOPS";
	display(a);
	const char *b="KABIL";
	display(b); 
}

/*
This executes non constant functionOOPS
This executes constant function KABIL
*/
