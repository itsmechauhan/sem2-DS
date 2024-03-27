/*
 Write a program to implement the following operations in an Array 
* Insertion 
* Deletion 
* Searching
*/
#include <iostream>
using namespace std;
int n;
void create(int*);
void display(int*);
void insert(int*);
void del(int*);
void search(int*);
int main(){
    int arr[n];
	create(arr);
    display(arr);
    insert(arr);
    display(arr);
    del(arr);
    display(arr);
    search(arr);
}

void create(int *array){
    cout<<"Enter the size of N: ";
    cin>>n;
    //taking input in an array
    cout<<"\nEnter the elements in the array : ";
    for(int i=0;i<n;i++){
    cin>>array[i];
}

}


void display(int *array){
cout<<"\nThe Final Array is : ";
for(int i=0;i<n;i++){
	cout<<array[i]<<" ";
}
}

void insert(int *array){
// position at which element
// is to be inserted
int pos;
cout<<"\nEnter the pos where you want to insert an element: ";
cin>>pos;
// element to be inserted
    int x;
    cout<<"\nEnter the element to insert at "<<pos<<" position : ";
    cin>>x;
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (int i = n-1; i >=pos; i--)
        array[i] = array[i - 1];
 
    // insert x at pos
    array[pos - 1] = x;
}

void del(int *array){
// position at which element
// is to be deleted
int pos;
cout<<"\nEnter the pos of which you want to delete an element: ";
cin>>pos;
    // shift elements backward
    for (int i = pos-1; i <=n-1; i++)
        array[i] = array[i+1];
    //decreasing the size by 1
    n--;
}

void search(int *array){
    int target,i,f=0;
    cout<<"\nEnter the target element you want to search in an array: ";
    cin>>target;
    for(i=0;i<n;i++){
        if(array[i]==target)
        {
            f=1;
            break;
        }
    }
    if(f==1)cout<<target<<" is found at index: "<<i<<" in the Array. "<<endl;
    else cout<<target<<"is not found in Array "<<endl;
}
