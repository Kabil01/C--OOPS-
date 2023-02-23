/*8.Write a program that demonstrates function overloading by defining two functions with the same name and same template, but different template parameters.*/

#include <iostream>
using namespace std;

template <typename T1,typename T2>
T2 add(T1 a,T2 b){
	return (a+b);
}

template <typename T3>
T3 add(T3 a,T3 b){
	return (a+b);
}


int main(){
	cout<<"2 + 4.12  = "<<add<int,double>(2,4.12)<<endl;
	cout<<"2.31 + 4.12  = "<<add<double>(2.31,4.12)<<endl;
}

/*
2 + 4.12  = 6.12
2.31 + 4.12  = 6.43
*/
