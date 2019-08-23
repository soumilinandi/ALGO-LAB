#include<stdio.h>

int stack[5],top;

void sorttopo(int arr[][6],int j,int visited[15],int v)
{
	visited[j]=1;
	for(int i=0;i<v;i++)
	{
		if(arr[j][i]==1 && visited[i]==0)
			sorttopo(arr,i,visited,v);
	}
	stack[++top]=j;
}
void dfstopo(int arr[6][6],int v)
{ 
	int visited[15];
	for(int i=0;i<v;i++)
	   visited[i]=0;
	top=-1;
	for(int i=0;i<v;i++)
	{
		
		if(!visited[i])
		sorttopo(arr,i,visited,v);
	}
	while(top!=-1)
	{
		printf("%d\n",stack[top--]);
	}
}


int main()
{
	int n,e1,e2,e,v;
	printf("Enter number of vertices(1...n) :");
	scanf("%d",&v);
	printf("\nEnter number of edges :");
    scanf("%d",&e);
    int emat[6][6];
    for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			emat[i][j]=0;
			if(i==j)
				emat[i][j]=1;
		}
	}
	printf("Enter connecting edges \n");
	for(int i=0;i<e;i++)
	{
		printf("Enter 2 connecting vertices \n");
		scanf("%d %d",&e1,&e2);
		emat[e1][e2]=1;
	}
	printf("Topoliogical sort is \n");
	dfstopo(emat,v);
	return(0);

}