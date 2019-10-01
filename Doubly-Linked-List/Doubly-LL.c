#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};
 
struct Node* head;

struct Node* GetNewNode(int x){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->prev=NULL;
	newNode->next=NULL;
	return   newNode;
	
}


void InsertAtHead(int x){
	struct Node* temp=GetNewNode(x);
	if(head==NULL){
		head=temp;
		return;
	}
	head->prev=temp;
	temp->next=head;
	head=temp;
	 
}

void InsertAtEnd(int x){
	struct Node* temp=GetNewNode(x);
	if(head==NULL){
		head=temp;
		return;
	}
	struct Node* temp1=head;
	while (temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp1->next=temp;
	temp->prev=temp1;
	temp->next=NULL;
}
	

void Print(){
	struct Node* temp=head;
	printf("forward: ");
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
}

void ReversePrint(){
	struct Node* temp=head;
	if (temp==NULL) return;
	
	while (temp->next!=NULL){
		temp=temp->next;
	}
	
	printf("Reverse: ");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->prev;
	}
	printf("\n");
	
}

 int main(){
	head=NULL;
	InsertAtHead(2); 
	Print(); 
	ReversePrint();
	
	InsertAtHead(4);
	Print(); 
	ReversePrint();
	
	InsertAtHead(6);
	Print(); 
	ReversePrint();
	
	InsertAtEnd(8);
	Print();
	ReversePrint();
	return 0;
}
	