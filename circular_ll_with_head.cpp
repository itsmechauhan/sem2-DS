#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node{
    int data;
    node* next;
}*head=NULL,*newnode,*temp,*temp2,*prevnode;

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
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        printf("Enter DATA: ");
        scanf("%d",&newnode->data);
        count++;
        if(head==NULL){
            head=newnode;
            head->next=newnode;
            prevnode=newnode;
        }
        else{
            newnode->next=prevnode->next;
            prevnode->next=newnode;
            prevnode=newnode;
        }
    }
}

void traverse(){
    temp=head;
    printf("\n\n Circular LL: ");
    do{
        printf(" %d",temp->data);
        temp=temp->next;
    }while(temp!=head);
    
}

void insert_beg(){

printf("\n\nInserting new node at the starting of cLL \n");
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter Data to insert at begining: ");
scanf("%d",&newnode->data);
temp=head;
while(temp->next!=head){
    temp=temp->next;
}
temp->next=newnode;
newnode->next=head;
head=newnode;
}

void insert_end(){
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter Data to insert at Last node: ");
scanf("%d",&newnode->data);
temp=head;
while(temp->next!=head){
    temp=temp->next;
}
temp->next=newnode;
newnode->next=head;
}

void insert_pos(){
    int idx,i=1;
    printf("\nEnter Pos where you want to insert data: ");
    scanf("%d",&idx);
    temp=head;
    while(i<idx-1){
        temp=temp->next;
        i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Data to insert at node-> %d : ",idx);
    scanf("%d",&newnode->data);
    count++;
    newnode->next=temp->next;
    temp->next=newnode;
}

void delete_beg(){
    temp=head;
    temp2=head;
    printf("\nDeleting the first node! \n");
    while(temp2->next!=head){
    temp2=temp2->next;
}
    head=temp->next;
    temp2->next=head;
    free(temp);
}

void delete_pos(){
    int j = 1, idx;
    temp = head;
    printf("\nEnter the position of node which you want to delete: ");
    scanf("%d", &idx);
    if(head == NULL){
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
    temp=head;
    while(temp->next!=head){
        prevnode=temp;
        temp=temp->next;
    }
    printf("\ndeleting last node !!\n");
    prevnode->next=head;
    free(temp);
}
