#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
	
}*head,*newnode,*prevnode,*temp;
int count=0;	
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
	head=NULL;
	cout<<"Enter the size of linked list: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		count++;
		newnode=(node*)malloc(sizeof(node));
		cout<<"Enter data at node "<<i<<" : ";
		cin>>newnode->data;
		newnode->next=NULL;
		if(head==NULL){
			head=newnode;
			temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
	}
}


void transverse(){
//transversing the linked list
	int i=1;
	temp=head;
	while(temp!=NULL){
		cout<<"\nData stored at node "<<i<<" is : "<<temp->data;
		temp=temp->next;
		i++;
	}
	cout<<"\nThe length of linked list is : "<<count<<endl;
}

void insert_beg(){
	count++;
	temp=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter data to insert at beg : ";
	cin>>newnode->data;
	newnode->next=head;
	head=newnode;
}

void insert_pos(){
	int i=1;
	temp=head;
	int idx;
	cout<<"\nEnter the pos where you want to insert data: ";
	cin>>idx;
	if(idx>count){
		cout<<"Invalid Position!! ";
		return;
	}
	else{
	newnode=(node*)malloc(sizeof(node));
	count++;
	cout<<"Inserting new node at "<<idx<<"\tEnter data: ";
	cin>>newnode->data;
	newnode->next=NULL;
	while(i<idx-1){
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	
	}	
	}	

void insert_end(){
	newnode=(node*)malloc(sizeof(node));
	count++;
	cout<<"Enter data at last node: ";
	cin>>newnode->data;
	newnode->next=NULL;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next=newnode;
	temp=newnode;	
	}

void delete_beg(){
	if(head==NULL)
	   cout<<"\nLinked list is empty !!";
	else{
		cout<<"Deleting first node ";
	temp=head;
	head=head->next;
	free(temp);
	count--;
}
}

void delete_end(){
	temp=head;
	cout<<"\nDeleting Last node! ";
	while(temp->next!=NULL){
		prevnode=temp;
		temp=temp->next;
	}
	count--;
	prevnode->next=NULL;
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
