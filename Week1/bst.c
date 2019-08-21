#include<stdio.h>
#include<stdlib.h>

struct node
{
	int val;
	struct node *llink,*rlink;

};
typedef struct node Node;

Node *root=NULL;
Node *getnode()
{
	Node *temp=(Node*)malloc(sizeof(Node));
	return(temp);
}
void createBST(int nval)
{
	if(root==NULL)
	{
		root=getnode();
		 root->val=nval;
		 root->llink=root->rlink=NULL;
		 return;
	}
	else
	{
		Node *temp=root;
		Node *prev=NULL;
		while(temp!=NULL)
		{
			prev=temp;
			if((temp->val)>nval)
			 temp=temp->llink;
			else
			if((temp->val)<nval)
				temp=temp->rlink;
			else
			{
				printf("Duplicaqte values not allowed\n");
				return;
			}
		}
		temp=getnode();
		temp->val=nval;
		temp->llink=temp->rlink=NULL;
		if(prev->val>nval)
		{
			prev->llink=temp;
		}
		else
			prev->rlink=temp;
	}
}
void inorder(Node *troot)
{
	if(troot==NULL)
		return;
	inorder(troot->llink);
	printf("%d ",troot->val);
	inorder(troot->rlink);

	
}
void preorder(Node *troot)
{
	if(troot==NULL)
		return;
	printf("%d ",troot->val);
	preorder(troot->llink);
	preorder(troot->rlink);

	
}
void postorder(Node *troot)
{
	if(troot==NULL)
		return;
	postorder(troot->llink);
	postorder(troot->rlink);
	printf("%d ",troot->val);

	
}
void searchbyval(Node* troot,int val,int *f)
{
	if(troot==NULL)
		return;
	if(troot->val==val)
	{
		*f=1;
		return;
	}
	searchbyval(troot->llink,val,f);
	searchbyval(troot->rlink,val,f);

}
int main()
{
	int val,ch;
	do{
		printf("1.Insert into tree \n");
		printf("2.Inorder\n");
		printf("3.Preorder\n");
		printf("4.postorder\n");
		printf("5.Search and insert\n");
		printf("6.Exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter number \n");
			scanf("%d",&val);
			createBST(val);
		}
		else if(ch==2)
		{
			printf("\n");
			inorder(root);
			printf("\n");
		}
		else if(ch==3)
		{
			printf("\n");
			preorder(root);
			printf("\n");
		}
		else if(ch==4)
		{
			printf("\n");
			postorder(root);
			printf("\n");
		}
		else if(ch==5)
		{
			int f=0;
			printf("\n Enter value to search\n");
			scanf("%d",&val);
			searchbyval(root,val,&f);
			if(f==1)
			{
				printf("Value found\n");
			}
			else
			{
				createBST(val);
				printf("\nValue inserted\n");
			}
		}

			

	}while(ch!=6);
	return(0);
		
}

