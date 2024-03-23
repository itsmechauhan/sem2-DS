#include <iostream>
using namespace std;
int main(){
	int I,J;
	cout<<"Enter the row length : ";
	cin>>I;
	
	int arr[I];
	//cout<<"Enter the elements in an array !! ";
	for(int i=0;i<I;i++){
		
			arr[i]=i;
	
	}
	int i,lbr=0;
	cout<<"Enter row index no:";
	cin>>i;
	int s=sizeof(int);
	cout<<"\nSize of int : "<<s;
	int x=s*(i-lbr);
	cout<<"\n S*(i-lbr)= "<<x;
	int *BA=&arr[0];
	cout<<"\nBA= "<<(int)BA;
	int *address_of_i =BA+x;
	cout<<"\nAddress of Arr["<<0<<"] is : "<<(int)BA;
	cout<<"\nAddress of Arr["<<i<<"] is : "<<(int)address_of_i;
	return 0;

}
