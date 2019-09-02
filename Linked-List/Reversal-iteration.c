#include <stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;

};

struct Node* head;

void Reverse(){
	struct Node *current,*prev,*next;
	current=head;
	prev=NULL;

	while(current!=NULL)
	{
		next=current->next;//next node to current node
		current->next=prev;//setting link of current to previous
		prev=current;//setting previous node to current for reversal
		current=next;//setting current node to next node

	}
	head=prev;

}

void Insert(int x){
    //insertion at beginning
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}

void Print(){
	struct Node* temp =head;
	printf("List is:");
	while(temp!= NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(void) {
	head=NULL;
	Insert(1);
	Insert(2);
	Insert(3);
	Insert(4);

	Print();

	Reverse();

	Print();
	return 0;
}
