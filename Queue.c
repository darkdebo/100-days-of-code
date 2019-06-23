#include <stdio.h>
void enqueue(int queue[],int element,int rear,int size);
void dequeue(int queue[],int front,int rear);
int Front(int queue[],int front);
int size(int queue[],int rear);
int main()
{
	int queue[10];
	enqueue(queue, 2, 0, 10);
	dequeue(queue, 0, 1);
	int s=size(queue, 0);
	printf("%d\n%d",queue[0],s);
}
void enqueue(int queue[],int element,int rear,int size)
{
	if(rear==size)
	{
		printf("overflow ,full queue\n");
	}
	else
	{
		queue[rear]=element;
		rear++;
	}
}
void dequeue(int queue[],int front,int rear)
 {
 	if(front==rear)
 	{
 		printf("underflow,empty\n");
 	}	
 	else
 	{
 		queue[front]=0;
 		front++;
 	}
 }
 int Front(int queue[],int front)
 {
 	return queue[front];
 } 		
 int size(int queue[],int rear)
 {
   int c=0;
   for(int i=0;i<rear;i++)
   {
   	 if(queue[i])
   	 {
   	 	c++;
   	 }	
   }
   return c;
}   
