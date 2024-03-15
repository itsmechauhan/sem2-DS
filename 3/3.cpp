/*
 Write a program in C to show the following 
* Call by Value 
* Call by Reference
*/

#include<stdio.h>
//call by value
void swap_call_by_value(int,int);

int main(){
    int a,b;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Before swap\n A= %d and B= %d",a,b);
    swap_call_by_value(a,b);
    printf("\nFinal value in call by value\nA= %d and B= %d",a,b);
}
void swap_call_by_value(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swap\n A= %d and B= %d",x,y);
}

/*
//call by reference 
//run both the parts separately to see the working
#include<stdio.h>
void swap_call_by_reference(int*,int*);
int main(){
    int a,b;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Before swap\n A= %d and B= %d",a,b);
    swap_call_by_reference(&a,&b);
    printf("\nFinal value after call by reference\nA= %d and B= %d",a,b);
}
void swap_call_by_reference(int *x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nAfter swap\n A= %d and B= %d",*x,*y);
}

*/
