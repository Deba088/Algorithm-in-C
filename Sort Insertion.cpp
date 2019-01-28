// C program to illustrate the concept of Insertion Sort
#include <stdio.h> 
int main() 
{ 
	int A[] = {1,4,2,8,5,7},n=6,k,j=0;
	for(int i=1;i<n;i++)
	{
		k=A[i];
		j = i-1;
		while(j>=0 && A[j]>k)
		{
			A[j+1] = A[j];
			A[j] = k;
			j--;
		}
		A[j+1] = k;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ", A[i]);
	}
	
	return 0;
} 

