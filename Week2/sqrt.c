#include<stdio.h>

int sqrtt(int num)
{
	int i;

	for(i=1;(i*i)<=num;i++)
	{
		if((i*i)==num)
			return(i);
	}
	return(i-1);
}
int main()
{
	int num;

	printf("Enter a number : \n");
	scanf("%d",&num);
	printf("SQRT of number is : %d ",sqrtt(num));
	return(0);
}