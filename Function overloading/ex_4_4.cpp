/*4.Write a program that demonstrates function overloading by defining two functions with the same name but different return types.*/

#include <iostream>
using namespace std;

string display(){
	string a="kabil";
	return a;
}

int display(){
	return 6;
}

int main(){
	int a;
	string b;
	a=display();
	cout<<"This displays "<<a<<endl;
	b=display();
	cout<<"This displays "<<a<<endl;
}
