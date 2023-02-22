#include <iostream>
using namespace std;

int main(){
	string inp;
	cout<<"Enter the string: ";
	cin>>inp;
	int count=0,n=inp.size();
	int end=n-1;
	for(int i=0;i<n;i++){
		if(inp[i]==inp[end]){
			count++;
			end--;
		}
	}
	if(count==n){
	cout<<"The given string is a palindrome"<<endl;
	}
	else{
	cout<<"The given string is not a palindrome"<<endl;
	}
}


//OUTPUT
/*
Enter the string: ROTATOR
The given string is a palindrome
*/
