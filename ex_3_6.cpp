#include <iostream>
using namespace std;

int main(){
	string inp;
	cout<<"Enter the string:";
	getline(cin,inp);
	int j=0;
	for(int i=0;i<inp.size();i++){
		if(inp[i]==65||inp[i]==73||inp[i]==69||inp[i]==79||inp[i]==85||inp[i]==97||inp[i]==101||inp[i]==105||inp[i]==111||inp[i]==117||(!((inp[i]>64 && inp[i]<91)||(inp[i]>96 && inp[i]<123)))){
			inp[j]=inp[i];
			j++;
		}
	}
	inp.resize(j);
	cout<<"The string is "<<inp;
}

//OUTPUT
/*
Enter the string:I am Okay,Task Completed
The string is I a Oa,a oee
*/
