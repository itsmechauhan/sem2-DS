/*
Write C programs to demonstrate the following operations on a circular linked list  
* Creation of a list 
* Adding an element at the beginning of the list. 
* Adding an element at the end of the list. 
* Deleting the first element. 
* Deleting the last element. 
*/
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    
}*tail,*newnode,*prevnode,*temp;
int count=0;    
void create();
void traverse();
void insert_beg();
void insert_end();
void delete_beg();
void delete_end();


int main(){
    create();
    traverse();
    /*
    insert_beg();
    traverse();
   
    insert_end();
    traverse();
    */
    delete_beg();
    traverse();
    delete_end();
    traverse();
    
    }

void create(){
    int n;
    tail=NULL;
    cout<<"Enter the size of linked list: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        count++;
        newnode=(node*)malloc(sizeof(node));
        cout<<"Enter data at node "<<i<<" : ";
        cin>>newnode->data;
        newnode->next=NULL;
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
//transversing the linked list
    int i=1;
    
    temp=tail->next;
    while(temp->next!=tail->next)
    {   
     cout<<"\nData stored at node "<<i<<" is : "<<temp->data;
    temp=temp->next;
        i++;
    } 
    cout<<"\nData stored at node "<<i<<" is : "<<temp->data;
    temp=temp->next;

    cout<<"\nThe length of linked list is : "<<count<<endl;
}

void insert_beg(){
    count++;
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter data to insert at beg : ";
    cin>>newnode->data;
    newnode->next=tail->next;
    tail->next=newnode;
    
}

void insert_end(){
    count++;
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter data to insert at End : ";
    cin>>newnode->data;
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
    }

void delete_beg(){
    if(tail==NULL)
       cout<<"\nLinked list is empty !!";
    else{
        cout<<"Deleting first node ";
    temp=tail->next;
    tail->next=temp->next;
    free(temp);
    count--;
}
}
/*
void delete_end(){
    temp=tail->next;
    cout<<"\nDeleting Last node! ";
    while(temp!=tail->next){
        prevnode=temp;
        temp=temp->next;
    }
    count--;
    prevnode->next=tail->next;
    prevnode=tail;

    free(temp);
}

void delete_pos(){
        int j=1,idx;
        temp=head;
        cout<<"Enter the position of node which you want to delete: ";
        cin>>idx;
        if(head==NULL){
            cout<<"\nList is Empty!!";
        }
        else if(idx>count){
            cout<<"\nInvalid Position !!";
        }
        else{
        while(j<idx){
            prevnode=temp;
            temp=temp->next;
            j++;
        }
    count--;
    prevnode->next=temp->next;
    free(temp);
}
}
*/
