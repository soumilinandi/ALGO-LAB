#include<stdio.h>


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
	int j3[6][3]={{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,0,1},{2,1,0}};
	int j4[24][4]={{0,1,2,3},{0,1,3,2},{0,2,1,3},{0,2,3,1},{0,3,1,2},{0,3,2,1},{1,0,2,3},{1,0,3,2},{1,2,0,3},{1,2,3,0},{1,3,0,2},{1,3,2,0},{3,1,2,0},{3,1,0,2},{3,2,1,0},{3,2,0,1},{3,0,1,2},{3,0,2,1},{2,1,0,3},{2,1,3,0},{2,0,1,3},{2,0,3,1},{2,3,1,0},{2,3,0,1}};
	int maxsum=0;
	int seq,sum;
	int i;
	if(n==3)
	{
		
		for(i=0;i<6;i++)
		{
			sum=0;
			printf("%d %d %d \n",j3[i][0],j3[i][1],j3[i][2]);
			sum+=arr[0][j3[i][0]]+arr[1][j3[i][1]]+arr[2][j3[i][2]];
			if(sum>maxsum)
			{
				maxsum=sum;
				seq=i;
			}
		}
		
		for(int i=0;i<n;i++)
		{
			printf(" Person %d : job %d \n",i+1,j3[seq][i]+1);
		}
		printf("\n Sum : %d ",maxsum);
	}
	else if(n==4)
	{
		
		for(i=0;i<24;i++)
		{
			sum=0;
			sum+=arr[0][j4[i][0]]+arr[1][j4[i][1]]+arr[2][j4[i][2]]+arr[3][j4[i][3]];
			if(sum>maxsum)
		{
			maxsum=sum;
			seq=i;
		}
		}
		
		for(int i=0;i<n;i++)
		{
			printf(" Person %d : job %d \n",i+1,j3[seq][i]+1);
		}
		printf("\n Sum : %d ",maxsum);
	}
	return(0);




}
