#include<stdio.h>
int knapsackrecursive(int v[5],int w[5],int i,int k,int sum)
{
	if(i==-1)
		return(0);
	sum+=w[i];
	if(sum>k)
		return(knapsackrecursive(v,w,i-1,k,sum-w[i]));
	else
	return(v[i]+knapsackrecursive(v,w,i-1,k,sum));
}

int knapsack(int v[5],int w[5],int n,int k)
{

    int val;
    int maxval=0;
    for(int i=n-1;i>=0;i--)
    {
    	val=knapsackrecursive(v,w,i,k,0);
    	if(val>maxval)
    		maxval=val;

    }
    return(maxval);
}
int main()
{
	int n;
	int v[5],w[5];
	printf("Enter the number of value/weights : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Item : %d \n",i+1);
		printf("Value : ");
		scanf("%d",&v[i]);
		printf("\nWeight  : ");
		scanf("%d",&w[i]);
	}
	int k;
	printf("\nEnter max weight : ");
	scanf("%d",&k);
	int val=knapsack(v,w,n,k);
	printf("Max val is : %d\n",val);
}