#include<iostream>
using namespace std;
//1. Write a C Program to read n elements in an array and find the average. 
int main(){
	int n,sum=0;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements in the array !!\n";
	//taking input
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//printing output and storing the sum
	cout<<"The input array is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		sum=sum+arr[i];
	}
	//printing the avg 
	cout<<"\nAverage = "<<sum/n<<endl;


}
