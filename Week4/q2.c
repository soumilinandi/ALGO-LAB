#include<stdio.h>

void dfs(int arr[][5],int v)
{ 
	int visited[10];
	for(int i=0;i<v;i++)
	{
		visited[i]=0;
	}
    printf("Enter node to start with : ");
    int ver;
    scanf("%d",&ver);
    int stack[5];
    int top=0;
    stack[0]=ver;
    printf("%d Pushed\n",ver);
    visited[ver]=1;
    int i;
    while(top!=-1)
    {
    	ver=stack[top];
	    for(i=0;i<v;i++)
	    {
	    	if(visited[i]==0 && arr[ver][i])
	    	{
	    		visited[i]=1;
	    		stack[++top]=i;
	    		printf("%d Pushed\n", i);
	    		break;

	    	}
	    }
	    if(i==v)
	    {   printf("%d Popped\n", stack[top]);
	    	top--;
	    }
	}

}

int main()
{
	int n,e1,e2,e,v;
	printf("Enter number of vertices(1...n) :");
	scanf("%d",&v);
	printf("\nEnter number of edges :");
    scanf("%d",&e);
    int emat[v][v];
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
		emat[e1-1][e2-1]=emat[e2-1][e1-1]=1;
	}
	dfs(emat,v);
	return(0);

}