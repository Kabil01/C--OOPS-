#include <iostream>
using namespace std;

int main(){
	string inp;
	cout<<"Enter the string :";
	cin>>inp;
	int n;
	n=inp.size();
	for (int len = 1; len <= n; len++)
	{	
		for (int i = 0; i <= n - len; i++)
		{
			int j = i + len - 1;			
			for (int k = i; k <= j; k++)
				cout << inp[k];
			
			cout << endl;
		}
	}
}

//OUTPUT
/*
Enter the string :ABCD
A
B
C
D
AB
BC
CD
ABC
BCD
ABCD
*/
