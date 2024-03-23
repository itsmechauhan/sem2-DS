#include <iostream>
using namespace std;
int address(int*);
int main(){
	int I,J,lbr,lbc;
	cout<<"Enter lbr: ";
	cin>>lbr;
	cout<<"Enter lbc: ";
	cin>>lbc;
	cout<<"Enter last idx row no: ";
	cin>>I;
	cout<<"Enter last idx cols no: ";
	cin>>J;

	int arr[I-lbr][J-lbc];
	for(int i=lbr;i<I;i++){
		for(int j=lbc;j<J;j++){
			arr[i][j]=i+j;
		}
	}
	int i,j;
	cout<<"Enter index row no Arr[i]:";
	cin>>i;
	cout<<"enter index col no Arr["<<i<<"]: ";
	cin>>j;
	int s=sizeof(int);
	cout<<"Size: "<<s;
	cout<<"\ni=2\n";
	cout<<"j=2\n";

	int *BA;
	int x=j-lbc;
	int n=J*(i-lbr);
	int totalsize=n+x;
	int *address=&arr[i][j];
	BA=address-totalsize;
	cout<<"Address of [2][2]<<"<<(int)address;
	cout<<"\nBase address: "<<(int)BA;
	cout<<" Difference: "<<(int)address-(int)BA;
	return 0;

}
