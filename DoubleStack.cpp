#include<stdio.h>
#include<stdlib.h>
#define size 10
typedef struct stack
{
	int x[size];
	int topA;
	int topB;
};

void push(stack*,int);
void pop(stack*,int);
void display(stack*);

int main()
{
	stack s;
	s.topA=-1;
	s.topB=size;
	int n,f;
	while(1)
	{
		printf("\n");
		printf("\nEnter 1 to PUSH");
		printf("\nEnter 2 to POP");
		printf("\nEnter 3 to DISPLAY");
		printf("\nEnter 4 to EXIT");
		printf("\nEnter your choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("Enter 1 if you want to PUSH to bottom.....else 2: ");
				scanf("%d",&f);
				push(&s,f);
				break;
			case 2:
				printf("Enter 1 if you want to POP from bottom.....else 2: ");
				scanf("%d",&f);
				pop(&s,f);
				break;
			case 3:
				display(&s);
				break;
			case 4:
				exit(0);
		}
	}
	return 1;
}

void push(stack*ds,int f)
{
	if(ds->topA==ds->topB-1)
	{
		printf("Stack Overflow");
		return;
	}
	int val;
	if(f==1)
	{
		printf("Enter the value: ");
		scanf("%d",&val);
		ds->topA++;
		ds->x[ds->topA]=val;
		printf("%d pushed into stack",val);
		return;
	}
	else if(f==2)
	{
		printf("Enter the value: ");
		scanf("%d",&val);
		ds->topB--;
		ds->x[ds->topB]=val;
		printf("%d pushed into stack",val);
		return;
	}
	else
	{
		printf("Error");
	}
}

void pop(stack*ds,int f)
{
	int val;
	if(f==1)
	{
		if(ds->topA==-1)
		{
			printf("Stack Underflow");
			return;
		}
		val = ds->x[ds->topA];
		ds->topA--;
		printf("%d popped from stack",val);
		return;
	}
	else if(f==2)
	{
		if(ds->topB==size)
		{
			printf("Stack Underflow");
			return;
		}
		val = ds->x[ds->topB];
		ds->topB++;
		printf("%d popped from stack",val);
		return;
	}
}

void display(stack*ds)
{
	if(ds->topA==-1 && ds->topB==size)
	{
		printf("Empty stack");
		return;
	}
	printf("\nStack: ");
	for(int i=0;i<=ds->topA;i++)
	{
		printf("%d ",ds->x[i]);
	}
	for(int i=size-1;i>=ds->topB;i--)
	{
		printf("%d ",ds->x[i]);
	}
	return;
}



