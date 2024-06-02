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
	//bubble sort
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Sorted Array is : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
