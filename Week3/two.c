#include<stdio.h>
int main()
{
	int v,graph[10][10];
	printf("Enter vertices (1..n)");
	scanf("%d",&n);
	int e;
	printf("Enter number of edges : \n");
	scanf("%d",&e);
	for(int i=0;i<v;i++)
	{
		graph[i][i]=1;
	}
	for(int i=0;i<e;i++)
	{
		printf("Enter connected edges %d : ",i+1);
		int a,b;
		scanf("%d %d",&a,&b);
		 graph[a-1][b-1]=1;
		 graph[b-1][a-1]=1;

	}
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			if
		}
	}

}