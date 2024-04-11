/*
Write C programs to demonstrate the following operations on a circular linked list  
* Creation of a list 
* Adding an element at the beginning of the list. 
* Adding an element at the end of the list. 
* Deleting the first element. 
* Deleting the last element. 
*/
#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node{
    int data;
    node* next;
}*tail=NULL,*newnode,*temp,*prevnode;
void create();
void traverse();
void insert_beg();
void insert_end();
void insert_pos();
void delete_beg();
void delete_end();
void delete_pos();
int main(){
create();
traverse();
insert_beg();
traverse();
insert_end();
traverse();
insert_pos();
traverse();
delete_beg();
traverse();
delete_end();
traverse();
delete_pos();
traverse();
}
void create(){
    int n;
    printf("Enter the size of CLL:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(node));
        newnode->next=NULL;
        printf("Enter DATA: ");
        scanf("%d",&newnode->data);
        count++;
        if(tail==NULL){
            tail=newnode;
            tail->next=newnode;
        }
        else{
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
    }
}

void traverse(){
    temp=tail->next;
    printf("\n\n Circular LL: ");
    do{
        printf(" %d",temp->data);
        temp=temp->next;
    }while(temp!=tail->next);
    
}
void insert_beg(){
printf("\n\nInserting new node at the starting of cLL \n");
newnode=(struct node*)malloc(sizeof(node));
printf("\nEnter DAta to insert at begining: ");
scanf("%d",&newnode->data);

newnode->next=tail->next;
tail->next=newnode;
}

void insert_end(){
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter Data to insert at Last node: ");
scanf("%d",&newnode->data);
newnode->next=tail->next;
tail->next=newnode;
tail=newnode;
}

void insert_pos(){
    int idx,i=1;
    printf("\nEnter Pos where you want to insert data: ");
    scanf("%d",&idx);
    temp=tail->next;
    while(i<idx-1){
        temp=temp->next;
        i++;
    }
    newnode=(struct node*)malloc(sizeof(node));
    printf("\nEnter Data to insert at node-> %d : ",idx);
    scanf("%d",&newnode->data);
    count++;
    newnode->next=temp->next;
    temp->next=newnode;
}

void delete_beg(){
    temp=tail->next;
    printf("\nDeleting the first node! \n");
    tail->next=temp->next;
    free(temp);
}

void delete_pos(){
    int j = 1, idx;
    temp = tail->next;
    printf("\nEnter the position of node which you want to delete: ");
    scanf("%d", &idx);
    if(tail->next == NULL){
        printf("\nList is Empty!!");
    }
    else if(idx > count){
        printf("\nInvalid Position !!");
    }
    else{
        printf("\ndeleting node of pos: %d",idx);
        while(j < idx){
            prevnode = temp;
            temp = temp->next;
            j++;
        }
        count--;
        prevnode->next = temp->next;
        free(temp);
    }
}

void delete_end(){
    temp=tail->next;
    while(temp!=tail){
        prevnode=temp;
        temp=temp->next;
    }
    printf("\ndeleting last node !!\n");
    prevnode->next=tail->next;
    tail=prevnode;
    free(temp);
}
