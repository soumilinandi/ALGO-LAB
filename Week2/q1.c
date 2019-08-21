#include<stdio.h>


int findgcd(int a,int b)
{
	int min;
	if(a<b)
		min=a;
	else
		min=b;
	while(1)
	{
		if(a%min==0 && b%min==0)
			return(min);
		min--;
	}
	return(min);

}
int main()
{
	int a,b;
	printf("Enter Two numbers : \n");
	scanf("%d %d",&a,&b);
	printf("gcd of %d and %d is : %d \n",a,b,findgcd(a,b));
	return(0);
}