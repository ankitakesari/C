#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* link;
};

struct Node* top=NULL;

void push(int data){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->link=top;
	top=temp;
	
}

void pop(){
	//struct Node* temp=top;
	//top=top->link;
	//free(temp);
	
	struct Node* temp;
	if(top==NULL) return;
	temp=top;
	top=top->link;
	free(temp);
	
	
}

void Print(){
	struct Node* temp=top; 
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->link;
	}
	printf("\n");
	
}


int main(){
	push(1);
	push(2);
	Print();
	pop();
	Print();
	return 0;
}