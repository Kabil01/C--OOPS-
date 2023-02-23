/*5.Write a program that demonstrates function overloading by defining three functions with the same name but different combinations of parameter types and number.*/

#include <iostream>
using namespace std;

void display(){
	cout<<"function() with no arguments"<<endl;
}
void display(string c,int d){
	cout<<c<<" is "<<d<<" Years old function(string,int)"<<endl;
}
void display(int c,string d){
	cout<<d<<" is "<<c<<" Years old function(int,string)"<<endl;
}

int main(){
	int a=19;
	string b="kabil";
	display();
	display(b,a);
	display(a,b);
}
