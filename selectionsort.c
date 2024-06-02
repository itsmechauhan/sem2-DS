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
	//selection sort

	for(int i=0;i<n;i++){
	int small=i;
		for(int j=1+i;j<n;j++){
			if(arr[small]>arr[j]){
				small=j;
				int temp=arr[small];
				arr[small]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("Sorted Array is : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
