#include<stdio.h>
int fact(int num)
{
	if(num==1)
		return(1);

	return(num*fact(num-1));
}
int isstrong(int num)
{
	if(num==0)
		return(0);
	return(fact(num%10)+isstrong(num/10));

}
int strong(int num)
{
	int n=num;
	if(n==isstrong(num))
		return(1);
	else
		return(0);
}
int main()
{
	int arr[10];
	int n;
	printf("Enter array size : ");
	scanf("%d",&n);
	printf("\nEnter array elements : \n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		
		if(strong(arr[i]))
		{
			for(int j=i;j<n-1;j++)
			{
				arr[j]=arr[j+1];
				
			}
			n--;
			i--;
		}
	}
	printf("Array after manipulation is \n");
	for(int i=0;i<n;i++)
		printf("%d  ",arr[i]);
	return(0);

}