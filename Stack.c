#include <stdio.h>
void push(int arry[],int data);
int pop(int arry[]);
int main()
{
	int stack[10];
	push(stack, 1);
	int s=pop(stack);
	printf("%d",s);
}
void push(int arry[],int data)
{
	int top=0;
	arry[top]=data;
	top++;
}	

int pop(int arry[])
{
	int top=0;
	int data=arry[top];
	top--;
	return data;	
}	
