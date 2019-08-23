
#include<stdio.h>

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};



   Node * insert(Node * root, int data) {
   Node * temp=new Node(data);
            if(root==NULL)
            {
                return(temp);
            }
            Node *cur,*prev;
            prev=NULL;
            cur=root;
            while(cur!=NULL)
            {
                prev=cur;
                if(data<cur->data)
                {
                    cur=cur->left;
                }
                else
                {
                    cur=cur->right;
                }
            }
            if(data<prev->data)
              prev->left=temp;
            else
              prev->right=temp;
              

        return root;
    }

int diameter(struct node * tree) 
{ 
   
   if (tree == NULL) 
     return 0; 
  
  
  int lheight = height(tree->left); 
  int rheight = height(tree->right); 
  int ld = diameter(tree->left); 
  int rd = diameter(tree->right); 
  
  
  return max(lheight + rheight + 1, max(ld, rd)); 
}  

int height(struct node* node) 

   if(node == NULL) 
       return 0; 

   return 1 + max(height(node->left), height(node->right)); 
}  
  

  

int max(int a, int b) 
{ 
  return (a >= b)? a: b; 
}     

int main()
{
  printf("Enter number of nodes");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    
}