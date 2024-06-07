#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node *next;
};

struct node *head = NULL,*newnode,*prevnode,*temp;
int count = 0;

void create();
void insert_end();
void delete_beg();
void delete_end();
void delete_pos();
void insert_beg();
void insert_pos();
void transverse();

int main(){
    create();
    transverse();
    
    insert_beg();
    transverse();

    insert_pos();
    transverse();
    
    insert_end();
    transverse();
    
    delete_beg();
    transverse();
    delete_end();
    transverse();
    delete_pos();
    transverse();

}

void create(){
    int n;
    printf("Enter the size of linked list: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        count++;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data at node %d : ", i);
        scanf("%d", &newnode->data);
        newnode->prev=NULL;
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            newnode->prev=temp;
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void transverse(){
    int i = 1;
    temp = head;
    while(temp != NULL){
        printf("\nData stored at node %d is : %d", i, temp->data);
        temp = temp->next;
        i++;
    }
    printf("\nThe length of linked list is : %d\n", count);
}

void insert_beg(){
    count++;
    temp = head;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to insert at beg : ");
    scanf("%d", &newnode->data);
    temp->prev=newnode;
    newnode->next = head;
    head = newnode;
}

void insert_pos(){
    int i = 1;
    temp = head;
    int idx;
    printf("\nEnter the pos where you want to insert data: ");
    scanf("%d", &idx);
    if(idx > count){
        printf("Invalid Position!! ");
        return;
    }
    else{
        newnode = (struct node*)malloc(sizeof(struct node));
        count++;
        printf("Inserting new node at %d\tEnter data: ", idx);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        while(i < idx - 1){
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev=temp;
        temp->next = newnode;
    }   
}   

void insert_end(){
    newnode = (struct node*)malloc(sizeof(struct node));
    count++;
    printf("Enter data at last node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev=temp;
    temp = newnode; 
}

void delete_beg(){
    if(head == NULL)
        printf("\nLinked list is empty !!");
    else{
        printf("\nDeleting first node ");
        temp = head;
        head = head->next;
        head->prev=NULL;
        free(temp);
        count--;
    }
}

void delete_end(){
    temp = head;
    printf("\nDeleting Last node! ");
    while(temp->next != NULL){
        prevnode = temp;
        temp = temp->next;
    }
    count--;
    prevnode->next = NULL;
    free(temp);
}

void delete_pos(){
    int j = 1, idx;
    temp = head;
    printf("Enter the position of node which you want to delete: ");
    scanf("%d", &idx);
    if(head == NULL){
        printf("\nList is Empty!!");
    }
    else if(idx > count){
        printf("\nInvalid Position !!");
    }
    else{
        while(j < idx){
            prevnode = temp;
            temp = temp->next;
            j++;
        }
        count--;
        prevnode->next = temp->next;
        temp->next->prev=prevnode;
        free(temp);
    }
}
