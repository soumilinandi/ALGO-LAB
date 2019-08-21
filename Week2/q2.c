#include<stdio.h>

int isprime(int num)
{
	if(num==2)
		return(1);
	for(int i=3;i<num/2;i++)
	{
		if(num%i==0)
			return(0);
	}
	return(1);

}

int findgcd(int a,int b)
{
	int min;
	if(a<b)
		min=a;
	else
		min=b;
	int pro=1;
	for(int i=2;i<min;i++)
	{
		cout<<i<<" -- ";
		if(isprime(i)==1)
		{
			if(a%i==0 && b%i==0)
			{
				pro*=i;
				a=a/i;
				b=b/i;
				i=1;
			}
		}
	}
	return(pro);
}
int main()
{
	int a,b;
	printf("Enter Two numbers : \n");
	scanf("%d %d",&a,&b);
	printf("gcd of %d and %d is : %d \n",a,b,findgcd(a,b));
	return(0);
}

