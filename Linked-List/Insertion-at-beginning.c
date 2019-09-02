#include <stdio.h>
#include<stdlib.h>

// creation of node structure
struct Node{
	int data;
	struct Node* next;
};

//head is global ,as to be accessed in all scopes
struct Node* head;

//Insertion at the begginning
void Insert(int x){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}

void Print(){
	struct Node* temp =head;
	printf("List is:");
	//Traversal of the linked list
	while(temp!= NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(void) {
	head=NULL;
	printf("How many numbers to be inserted?\n");
	int n,i,x;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter the number \n ");
		scanf("%d",&x);
		Insert(x);
		Print();
	}
	return 0;
}
