#include <iostream>
using namespace std;

int main(){
	string inp;
	cout<<"Enter the string :";
	cin>>inp;
	int n=inp.size();
	int k=n/2;
	for(int i=0;i<k;i++){
		auto temp=inp[i];
		inp[i]=inp[n-1];
		inp[n-1]=temp;
		n--;
	}
	cout<<"The reversed string is "<<inp;
}


//Output
/*
Enter the string :reverse
The reversed string is esrever
*/
