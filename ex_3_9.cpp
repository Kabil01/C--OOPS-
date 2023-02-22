#include <iostream>
using namespace std;

string substring(string a,int b,int c){
	int j=0;
	char substr[c]={'\0'};
	for(int i=b;i<b+c;i++){
		substr[j]=a[i];
		j++;
	}
	return substr;
}

int main(){
	string inp,out;
	int pos,len;
	cout<<"Enter the string :";
	getline(cin,inp);
	cout<<"Position :";
	cin>>pos;
	cout<<"Length :";
	cin>>len;
	out=substring(inp,pos,len);
	cout<<"Output :"<<out<<endl;
}

//OUTPUT
/*
Enter the string :Welcome to world of C++ Programming
Position :
5
Length :9
Output :me to wor
*/
