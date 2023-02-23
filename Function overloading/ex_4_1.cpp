/*Write a program that demonstrates function overloading by defining two functions with the same name but different number of parameters.*/

#include <iostream>
using namespace std;

void info(string a){
	cout<<"Hi "<<a<<endl;
	cout<<"This function accepts one parameter"<<endl;
}

void info(string a,int b){
	cout<<a<<" is "<<b<<" years old"<<endl;
	cout<<"This function accepts two parameter"<<endl;
}

int main(){
	string inp="Kabil";
	int age=19;
	info(inp);
	info(inp,age);
}

/*
Hi Kabil
This function accepts one parameter
Kabil is 19 years old
This function accepts two parameter
*/
