#include <iostream>
using namespace std;

int main(){
	string inp;
	cout<<"Enter the string: ";
	getline(cin,inp);
	int count=1;
	for(int i=0;inp[i]!='\0';i++){
		if(inp[i]==' '){
			count++;
		}
	}
	cout<<"No of words in string is "<<count<<endl;
}
