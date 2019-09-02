#include <stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

//insertion at the end
void Insert(int data){
	struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
	if (head==NULL){
		temp1->data=data;
		temp1->next=head;
		head=temp1;
		return;
	}

	struct Node* temp=head;
	while(temp->next!= NULL){
		temp=temp->next;
	}

	temp1->data=data;
	temp->next=temp1;
	temp1->next=NULL;


}

void Delete(int n){
	struct Node* temp1= head;
	if(n==1){
		head=temp1->next;
		free(temp1);
		return;
	}
	int i;
	for(i=0;i<n-2;i++){
		temp1=temp1->next;
	}
	//temp1 points to (n-1)th Node

	struct Node* temp2=temp1->next;//nth node
	temp1->next=temp2->next; //now (n-1)'s link points to (n+1) link
	free(temp2);

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

	int n;
	printf("Enter the position");
	scanf("%d",&n);
	Delete(n);

	Print();
	return 0;
}
