#include<stdio.h>
#include<string.h> 

void bubblesortstring(char arr[][100],int n)
{
	char temp[20];
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(strcmp(arr[j],arr[j+1])>0)
			{
				strcpy(temp, arr[j+1]);
				strcpy(arr[j+1],arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}
}
int main()
{
	char arr[10][100];
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("\n");
	printf("Enter strings: ");
	for(int i=0;i<=n;i++)
	{
		
		gets(arr[i]);
		printf("\n");
	}
	bubblesortstring(arr,n+1);
	printf("Array after bubble sort is : \n");
	for(int i=0;i<=n;i++)
	{
		
		puts(arr[i]);
		printf("\n");
	}
	return(0);
}