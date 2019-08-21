//This is working,some end cases to be checked,segmentation fault

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int val;
	struct node *llink,*rlink;

};
typedef struct node Node;

Node *head=NULL;

Node * createNode()
{
	Node *temp=(Node*)malloc(sizeof(Node));
	return(temp);
}

void CreateList(int val)
{
	if(head==NULL)
	{
		Node *temp=createNode();
		temp->llink=NULL;
		temp->rlink=NULL;
		temp->val=val;
		head=temp;
	}
	else
		printf("List is already created\n" );
	
}
void InsertIntoList(int before,int val)
{
	Node *temp;
	temp=head;
	while(temp->val!=before)
	{
		temp=temp->rlink;
	}
	if(temp!=NULL)
	{
		Node *new=createNode();
		new->val=val;
		if(temp->llink!=NULL)
		{
			temp->llink->rlink=new;
			new->llink=temp->llink;
			new->rlink=temp;
			temp->llink=new;
		}
		else
		{
			new->rlink=temp;
			temp->llink=new;
			head=new;
		}
	}
	else
	{
		printf("Unable to insert,node with value %d",val,"not there\n");

	}
	
}
void DeleteAll(int dval)
{
	Node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->val==dval)
		{
			if(temp->llink!=NULL)
			{
				temp->llink->rlink=temp->rlink;
				if(temp->rlink!=NULL)
				{
					temp->rlink->llink=temp->llink;
					temp=temp->rlink;
				}
				else
				{
					temp->llink->rlink=NULL;
					temp=NULL;
				}
			}
			else
			{
				if(temp->rlink!=NULL)
				{
					temp->rlink->llink=NULL;
					head=temp->rlink;
					temp=head;
					free(temp);
				}
				else
				{
					head=temp=NULL;
					free(temp);
				}
			}

		}
		else
		{
			temp=temp->rlink;
		}
	}

}
void searchNode(int sval)
{
	Node * temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->val==sval)
		{
			printf("Node is found\n");
		}
		temp=temp->rlink;
	}
}
void displayAll()
{
	Node* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->val);
		temp=temp->rlink;
	}
}

int main()
{
	int choice,val,before;
	do
	{
		printf("1. CreateList\n");
		printf("2. InsertIntoList\n");
		printf("3. Delete all by value\n");
		printf("4. Search b y value\n");
		printf("5. displayAll\n");
		printf("6. Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter  value to enter into the list\n");
					scanf("%d",&val);
					CreateList(val);
					break;
			case 2: printf("Enter the node value to enter\n");
					scanf("%d",&val);
					printf("Before Number?\n");
					scanf("%d",&before);
					InsertIntoList(before,val);
					break;
			case 3: printf("Enter the node valuie to be deleted\n");
					scanf("%d",&val);
					DeleteAll(val);
					break;
			case 4:printf("Enter the node value to be searched\n");
					scanf("%d",&val);
					searchNode(val);
					break;
			case 5: displayAll();
					break;
			case 6: break;
		}
		}while(choice!=6);
		return(0);
		

}


