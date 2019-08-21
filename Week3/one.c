#include<stdio.h>

void multiply(int mat1[5][5],int mat2[5][5], int mat3[5][5],int N,int Q) 
{ 
    int i, j, k; 
    for(i=0;i<N;i++) 
    { 
        for(j=0;j<Q;j++) 
        { 
            mat3[i][j]=0; 
            for (k=0;k<Q;k++) 
            {
                mat3[i][j] += mat1[i][k]*mat2[k][j]; 
            }
        } 
    } 
} 

int main()
{
	int n,m;
	int arr1[5][5],arr2[5][5],arr3[5][5];
	printf("Enter dimension of 1st matrix : \n");
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		 scanf("%d",&arr1[i][j]);
	}

	int p,q;
	printf("Enter dimension of 2nd matrix : \n");
	scanf("%d %d",&p,&q);
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		 scanf("%d",&arr2[i][j]);
	}
	multiply(arr1,arr2,arr3,n,q);
	printf("Array 3 is : \n ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<q;j++)
		 printf("%d  ",arr3[i][j]);
		printf("\n");
	}



}