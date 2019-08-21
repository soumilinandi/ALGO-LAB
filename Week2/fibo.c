#include<stdio.h>

int fibo(int n)
{
	if(n==1)
		return(1);
	if(n==2)
		return(1);
	return(fibo(n-1)+fibo(n-2));
}
int main()
{
	int num;
	printf("Enter n : ");
	scanf("%d",&num);
	printf("%d th fibonacci number is : %d  \n",num,fibo(num) );
	return(0);

}