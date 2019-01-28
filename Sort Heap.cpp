#include<stdio.h>
#include<stdlib.h>
void heapify(int arr[], int i,int n);
void heapSort(int arr[],int n);
void heapSort(int arr[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(arr, i, n);
	}
	for(int i=n-1;i>=0;i--)
	{
		int a=arr[i];
		arr[i]=arr[0];
		arr[0]=a;
		heapify(arr,0,i);
	}
}
void heapify(int arr[], int i,int n)
{
	int l=2*i+1,r=2*i+2,n1=i;
	if(l<n && arr[l]>arr[n1])
		n1=l;
	if(r<n && arr[r]>arr[n1])
		n1=r;
	if(n1!=i)
	{
		int a=arr[i];
		arr[i]=arr[n1];
		arr[n1]=a;
		heapify(arr,n1,n);
	}
}

int main()
{
	int arr[]={2,4,6,1,9,5,2,8,7},n;
	n=sizeof(arr)/sizeof(arr[0]);
	heapSort(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
