/*7.Write a program that demonstrates function overloading by defining two functions with the same name but different templates.*/

#include <iostream>
using namespace std;

template <typename T> 

T add(T a,T b){
	return a+b;
}


int main(){
	int a;
	double b;
	string c="";
	a=add<int>(4,5);
	cout<<"4 + 5 = "<<a<<endl;
	b=add<double>(3.14,5.12);
	cout<<"3.14 + 5.12 = "<<b<<endl;
	c=add<string>("Kabil","eshwaran");
	cout<<"Kabil + eshwaran = "<<c<<endl;		
}

/*
4 + 5 = 9
3.14 + 5.12 = 8.26
Kabil + eshwaran = Kabileshwaran
*/
