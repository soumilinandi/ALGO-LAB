#include<stdio.h>
#include<stdlib.h>
struct mainnode
{
	int val;
	struct mainnode *right,*bottom;
};
typedef struct mainnode Node;

Node *getnode()
{
	Node *temp=(Node*)malloc(sizeof(Node));
	return(temp);
}

int main()
{
	int v,e,e1,e2;

	printf("Enter number of vertices  (1...n)  \n");
	scanf("%d",&v);
	printf("Enter number of edges\n");
	scanf("%d",&e);
	int emat[v][v];

	Node *prev=NULL;
	Node *head=NULL;

	for(int i=0;i<v;i++)
	{

		if(head==NULL)
		{
			head=getnode();
			head->val=1;
			head->right=NULL;
			head->bottom=NULL;
			prev=head;
		}
		else
		{
				Node *temp=getnode();
				temp->val=i+1;
				temp->right=NULL;
				temp->bottom=NULL;
				prev->bottom=temp;
				prev=temp;
		}
	}
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
		Node *temp1=head;
		while(temp1!=NULL)
		{
			if(temp1->val==e1)
			{
				Node *temp5=temp1;
				while(temp5->right!=NULL)
				{
					temp5=temp5->right;
				}
                Node *temp2=getnode();
                temp2->val=e2;
                temp2->right=NULL;
                temp2->bottom=NULL;
				
				temp5->right=temp2;
			}
			temp1=temp1->bottom;

		}
		Node *temp3=head;
		while(temp3!=NULL)
		{
			if(temp3->val==e2)
			{
				Node *temp6=temp3;
				while(temp6->right!=NULL)
				{
					temp6=temp6->right;
				}
                Node *temp4=getnode();
                temp4->val=e1;
                temp4->right=NULL;
                temp4->bottom=NULL;
				
				temp6->right=temp4;
			}
			temp3=temp3->bottom;
		}


	}
	printf("Adjacency matrix is \n");
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			printf("%d ",emat[i][j]);
		}
		printf("\n");
	}

	printf("Adjacency list is \n");
	Node *temp1=head;
	while(temp1!=NULL)
	{
		Node *temp2=temp1;
		while(temp2!=NULL)
		{
			printf("%d ->",temp2->val);
			
			temp2=temp2->right;
		}
		printf("NULL\n");
		temp1=temp1->bottom;
	}

return(0);
}