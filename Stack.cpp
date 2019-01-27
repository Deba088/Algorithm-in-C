#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
	int top;
	int x[100];
}stack;
void push(stack*);
int pop(stack*);
void display(stack*);

int main()
{
	int choice, val;
	stack s;
	s.top=-1;
	
	while(1)
	{
		printf("\n");
		printf("\nPress 1 for PUSH");
		printf("\nPress 2 for POP");
		printf("\nPress 3 for DISPLAY");
		printf("\nPress 4 for EXIT");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				push(&s);
				break;
			case 2:
				val=pop(&s);
				if(val==-999)
				{
					printf("\nStack Underflow");
					break;
				}
				printf("\n%d",val);
				break;
			case 3:
				display(&s);
				break;
			case 4:
				exit(0);
		}
	}
}

void push(stack*sp)
{
	if(sp->top==99)
	{
		printf("\nStack Overflow");
		return;
	}
	int val;
	printf("\nEnter the value to be pushed: ");
	scanf("%d",&val);
	sp->top++;
	sp->x[sp->top]=val;
}

int pop(stack*sp)
{
	if(sp->top==-1)
		return -999;
	int val;
	val=sp->x[sp->top];
	sp->top--;
	return val;
}

void display(stack*sp)
{
	if(sp->top==-1)
	{
		printf("\nStack is empty");
		return;
	}
	int n=sp->top,val;
	printf("\n");
	for(int i=0;i<=n;i++)
	{
		val=sp->x[i];
		printf("%d ",val);
	}
}


