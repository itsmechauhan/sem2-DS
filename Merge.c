#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
}*head1=NULL,*head2=NULL,*finalhead=NULL,*temp,*newtemp,*newnode;

int count=0;
void create(struct node **);
void traverse(struct node **);
void merged_LL(struct node **,struct node **);

int main(){
create(&head1);
printf("First LL: ");
traverse(&head1);
create(&head2);
printf("\nSecond LL: ");
traverse(&head2);
merged_LL(&head1,&head2);
 traverse(&finalhead);
}

void create(struct node **head){
int i,n; 
printf("\nEnter the size of linked list: ");
scanf("%d",&n);

for(i=1;i<=n;i++){ 
count++;
newnode = (struct node*)malloc(sizeof(struct node)); 
printf("Enter data : "); 
scanf("%d",&newnode->data); 
newnode->next = NULL; 
if(*head==NULL) 
{ 
    *head = newnode; 
    temp = newnode; 
} 
else{ 
 temp->next = newnode; 
 temp= newnode;
} 
} 
}

void traverse(struct node **head){
	temp=*head;
	while(temp!=NULL){
		printf("%d ",temp->data);
	    temp=temp->next;
	}
}

 void merged_LL(struct node **head1,struct node **head2){
 	temp=*head1;
 	while(temp!=NULL){
 		newnode=(struct node*)malloc(sizeof(struct node));
 		temp->data=newnode->data;
 		newnode->next=NULL;
 		if(finalhead==NULL){
 			finalhead=newnode;
 			newtemp=newnode;
 		}
 		else{
 			newtemp->next=newnode;
 			newtemp=newnode;
 		}
 		temp=temp->next;
 	}
 	temp=*head2;
 	while(temp!=NULL){
 		newnode=(struct node*)malloc(sizeof(struct node));
 		temp->data=newnode->data;
 		newnode->next=NULL;
 		newtemp->next=newnode;
 		newtemp=newnode;
 }
}
