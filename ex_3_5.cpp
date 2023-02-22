/*Take Input as Full Name and Display the abbreviations of the First and Middle name Except the Last Name  For Example: Input string:  Mahendra Singh Dhoni Output String: M.S.
Dhoni.*/
#include <iostream>
using namespace std;

int main(){
	int k=0;
	string fullname;
	cout<<"Enter the Fullname : ";
	getline(cin,fullname);
	char ini[5]={'\0'},j=2,c=0;
	char lastname[20]={'\0'};
	ini[0]=fullname[0];
	ini[1]='.';
	ini[3]='.';
	for(int i=0;i<fullname.size()-2;i++){
		if(fullname[i]==' '){
			ini[j]=fullname[i+1];
			j=j+2;
			c++;
		}
		if(c==2){
			lastname[k]=fullname[i+2];
			k++;
		}
	}
	cout<<"The Output string is "<<ini<<endl;
}
