#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
void front();
void rear();

int f=-1,r=-1,option,size;
int queue[100];

int main()
{
	while(1)
	{
	
	printf("Select the option.\n");
	printf("1.Enqueue\n");
	printf("2.Dequeue\n");
	printf("3.Display\n");
	printf("4.Font\n");
	printf("5.Rear\n");
	printf("6.Exit\n");
	
	
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			front();
			break;
		case 5:
			rear();
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("Select the valid option.\n") ;
	}
	
	}
	return 0;
}
void enqueue()
{	
	printf("Enter the size of queue.\n");
	scanf("%d",&size);
	if(r==size-1)
	{
		printf("Overflow.\n");
	}
	else if(f==-1&&r==-1)
	{
		f=f+1;
		r=r+1;
		printf("enter the 1 element of queue\n");
		scanf("%d",&queue[r]);
		for(int i=1;i<=size-1;i++)
		{
			r++;
			printf("enter the %d element\n",r+1);
			scanf("%d",&queue[r]);
		}
	}
	
	
	
	
}
void dequeue()
{ 
	printf("%d is the dequeued element.\n",queue[f]);
	f++;
	
}
void display()
{	
if(f==-1&&r==-1)
{
	printf("Underflow\n");
}
else{

	for(int i=f;i<=r;i++)
	{
		printf("%d\n",queue[i]);
	}
}
}
void front()
{
	printf("%d is the front element.\n",queue[f]);
	
}
void rear()
{
	printf("%d is the rear element.\n",queue[r]);
	printf("\n\n");
}

