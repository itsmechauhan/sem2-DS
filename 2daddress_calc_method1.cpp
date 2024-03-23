#include <iostream>
using namespace std;
int address(int*);
int main(){
	int I,J;
	cout<<"Enter the row length : ";
	cin>>I;
	cout<<"Enter the cols length: ";
	cin>>J;
	
	int arr[I][J];
	cout<<"Enter the elements in an array !! ";
	for(int i=0;i<I;i++){
		for(int j=0;j<J;j++){
			arr[i][j]=i+j;
		}
	}
	int i=2,j=2,lbr=0,lbc=0;
	int s=sizeof(int);
	cout<<"Size: "<<s;
	cout<<"\ni=2\n";
	cout<<"j=2\n";

	int *BA;
	int x=j-lbc;
	int n=J*(i-lbr);
	int totalsize=n+x;
	int *address=&arr[2][2];
	BA=address-totalsize;
	cout<<"Address of [2][2]<<"<<(int)address;
	cout<<"\nBase address: "<<(int)BA;
	cout<<" Difference: "<<(int)address-(int)BA;
	return 0;

}
