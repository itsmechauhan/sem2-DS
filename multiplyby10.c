#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head=NULL,*temp,*newnode;
void multiplyby10(struct node *head){
	temp=head;
	while(temp!=NULL){
		temp->data=temp->data*10;
		temp=temp->next;
	}

}
void create();
void traverse();

int main(){
create();
printf("Linked list before multiply every element by 10: ");
traverse();
printf("\nLinked list After multiply every element by 10: ");
multiplyby10(head);
traverse();
}

void create(){
	int n;
	printf("Enter no of nodes ypu want to create: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		newnode=(struct node*)malloc(sizeof(node));
		newnode->next=NULL;
		printf("Enter Data at node %d : ",i);
		scanf("%d",&newnode->data);
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
void traverse(){
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
