/*Check if the word “Hello” is Present in the given Statement “Welcome to all, Hello Take Your Seat”*/
#include <iostream>
using namespace std;

int main(){
	string inp;
	cout<<"Enter the string :";
	getline(cin,inp);
	string check="Hello";
	size_t n=inp.find(check);
	if(n!=-1){
		cout<<"The word “Hello” is Present in the given Statement "<<inp;
	}
	else{
		cout<<"The word “Hello” is not Present in the given Statement "<<inp;
	}
}

//OUTPUT

/*
Enter the string :Welcome to all, Hello Take Your Seat
The word “Hello” is Present in the given Statement Welcome to all, Hello Take Your Seat
*/
