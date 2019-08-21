#include<stdio.h>

int parr[5][5];
int k;

void printArr(int a[],int n) 
{ 
    for (int i=0; i<n; i++) 
    {
        parr[k][i]=a[i];
    }
   k++;
} 

void heapPermutation(int a[], int size, int n) 
{ 
   
    if (size==1) 
    { 
        printArr(a, n); 
        return; 
    } 
  
    for (int i=0; i<size; i++) 
    { 
        heapPermutation(a,size-1,n); 
  
        if (size%2==1) 
        {
          
            int temp=a[0];
            a[0]=a[size-1];
            a[size-1]=temp;
        }
        else
            {
            	int temp=a[i];
            a[i]=a[size-1];
            a[size-1]=temp;
            } 
    } 
} 
int main()
{
	int n,w;
	int arr[10][10];
	printf("Enter the number of people/jobs in your graph\n");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Enter pay for job %d :",i+1);
		for(int j=0;j<n;j++)
		{
			printf("\nPerson %d :",j+1);
			scanf("%d",&w);
			arr[j][i]=w;
		}
		
	}
	
	int maxsum=0;
	int seq,sum;
	int i;
	int a[5];
	for(int i =0;i<n;i++)
	{
		a[i]=i;
	}
	heapPermutation(a,n,n);

		for(i=0;i<k;i++)
		{

			sum=0;
			for(int j=0;j<n;j++)
			{
				sum+=arr[j][parr[i][j]];
			}
			if(sum>maxsum)
			{
				maxsum=sum;
				seq=i;
			}
		}
		
		for(int i=0;i<n;i++)
		{
			printf(" Person %d : job %d \n",i+1,parr[seq][i]+1);
		}
		printf("\n Sum : %d ",maxsum);
	return(0);
	



}
