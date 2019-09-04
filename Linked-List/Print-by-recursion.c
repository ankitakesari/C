#include <stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

 void Print(struct Node* head)
 {
	 //here head would be a local variable
	 //recursion is a function calling itself
	 
	 if (head == NULL) return; //exit condition
	 printf("%d", head->data); // first print the value in the node
	 Print(head->next); //Recursion call
	 
 }
 
 void Reverse_Print(struct Node* head)
 {
	 //here head would be a local variable
	 //recursion is a function calling itself
	 
	 if (head == NULL) return; //exit condition
	 Reverse_Print(head->next); //first Recursion call
	 printf("%d", head->data); // print the value in the node
	 
 }
   
 
 //insertion at the end
struct Node* Insert(struct Node* head,int data)
 {
	struct Node* temp =(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	if(head == NULL) head=temp ;
	
	else{
		struct Node* temp1=head;
		while(temp1->next !=NULL) temp1=temp1->next;
		temp1->next=temp;
	}
	return head;
	
}

int main(){
	struct Node* head=NULL; //local variable
	head=Insert(head,2);
	head=Insert(head,4);
	head=Insert(head,6);
	head=Insert(head,5);
	Print(head);
	printf("\n");
	Reverse_Print(head);
	
	
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



	 