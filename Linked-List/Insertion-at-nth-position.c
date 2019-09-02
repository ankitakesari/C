#include <stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int data,int n){
    //creation of new node to be inserted
	struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
	temp1->data=data;
	temp1->next=NULL;

	//if the list is empty
	if (n==1){
		temp1->next=head;
		head=temp1;
		return;
}
	struct Node* temp2=head;
	int i;
	//when list is not empty,traversing to (n-1)th link
	for(i=0;i<n-2;i++){
		temp2=temp2->next;
}

	temp1->next= temp2->next;
	temp2->next=temp1;
}

void Print(){
	struct Node* temp =head;
	printf("List is:");
	//traversal to print
	while(temp!= NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(void) {
	head=NULL;
	Insert(5,1);
	Insert(6,2);
	Insert(7,1);
	Insert(8,2);
	Print();

    return 0;
}
