#include<stdio.h>

void bubblesort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=t;
			}
		}
	}
}
int main()
{
	int n,arr[100];
	printf("Enter array size: \n");
	scanf("%d",&n);
	printf("Enter array elements \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	printf("Array after bubble sort is : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	return(0);
}