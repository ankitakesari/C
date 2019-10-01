#include <stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head;
struct Node* head1;

void Reverse_List(struct Node* p){

	if (p->next==NULL) {
		head1=p;
		return;
	}


	Reverse_List(p->next);
	struct Node* q=p->next;
	q->next=p;
	p->next=NULL;

}

void Insert(int data){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	if (head==NULL) {
		temp->next=head;
		temp->data=data;
		head=temp;
		}

	else{
		struct Node* temp1=head;
		while(temp1->next!=NULL){
			temp1=temp1->next;
		}
		temp1->next=temp;
		temp->data=data;
		temp->next=NULL;
	}

}


 void Print(struct Node* h)
 {

	 if (h == NULL) return; //exit condition
	 printf("%d", h->data); // first print the value in the node
	 Print(h->next); //Recursion call

}


int main(void){
	head=NULL;
	head1=NULL;
	Insert(1);
	Insert(2);
	Insert(3);
	Insert(4);

	Print(head);
    printf("\n");
	Reverse_List(head);

	Print(head1);
	return 0;
}