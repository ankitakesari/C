#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top= -1;

void push(int x){
	if (top == MAX_SIZE-1)
	{
		printf("error: stack overflow \n");
		return;
	}
	//top++; A[top]=x;
	A[++top]=x; 
}

void pop(){
	if (top == -1)
	{
		printf("error: stack underflow \n");
		return;
	}
	top--;
}

int Top(){
	return A[top];
}

void Print(){
	int i;
	printf("stack: ");
	for(i=0;i<=top;i++)
		printf("%d",A[i]);
	printf("\n");
}
 int main(){
	 push(1);
	 push(2);
	 push(3);
	 pop();
	 push(4);
	 Print();
	 
 }
