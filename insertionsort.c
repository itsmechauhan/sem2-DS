#include<stdio.h>
int main(){
	int n;
    printf("Enter the size of Array: ");
	scanf("%d",&n);
	int arr[n];
	//taking inputs
	printf("Enter the Elements in the Array: ");
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	//insertion sort
	for(int i=1;i<n;i++){
	int temp=arr[i]; //let till temp we have sorted array 
	int j=i-1;
		while(temp<arr[j]&& j>=0){
			arr[j+1]=arr[j];
			--j;
		}
		arr[j+1]=temp;
	}
	printf("Sorted Array is : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
