#include <iostream>
using namespace std;

int main(){
	string inp;
	cout<<"Enter the string :";
	cin>>inp;
	for(int i=0;i<inp.size();i++){
		if((inp[i]>64 && inp[i]<90)||(inp[i]>96 && inp[i]<122)){
			size_t inc=inp[i];
			inp[i]=++inc;
			}
		}
	cout<<"The output is "<<inp;
	return 0;
}
