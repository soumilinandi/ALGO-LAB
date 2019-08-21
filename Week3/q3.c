#include<stdio.h>
#include<math.h>


int subset(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
	int num;
	num=(pow(2,n-1))-1;
	for(int i=1;i<=num;i++)
	{
		int sum1=0;
		int number=i;
		int k=n-1;
		while(number)
		{   
			if(number%2!=0)
				sum1+=arr[k];
			number=number/2;
			k--;
		}
		if(sum1==sum/2)
		{
			
			int k=n-1;
			while(i)
			{
				if(i%2==0)  
					printf("%d : partition 1  \n",arr[k]);
				else
					printf("%d : partition 2  \n",arr[k]);
				i=i/2;
				k--;
			}
			while(k!=-1)
			{
				printf("%d : partition 1  \n",arr[k]);
				k--;
			}
			return(1);
		}

	}
	return(0);
}
int recursivesubset(int arr[],int sum,int n,int i)
{
    if(i==(pow(2,n-1)))
    	return(0);
    recursivesubset(arr,sum,n,i+1);
    int num=i;
    int k=n-1;
    int sum1=0;
    while(i)
    {
    	if(i%2!=0)
    		sum1+=arr[k];
    	k--;
    	i=i/2;
    }
    if(sum1==sum)
    {
    	int k=n-1;
			while(i)
			{
				if(i%2==0)  
					printf("%d : partition 1  \n",arr[k]);
				else
					printf("%d : partition 2  \n",arr[k]);
				i=i/2;
				k--;
			}
			while(k!=-1)
			{
				printf("%d : partition 1  \n",arr[k]);
				k--;
			}
			return(1);

    }
    else
    	return(0);
   


}

int main()
{
	int n,arr[100];
	int sum=0;
	printf("Enter array size : \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];

	}
	if(sum%2==0)
	{
		sum=sum/2;
		if(subset(arr,n)==1)
			printf("Subset found!");
		else
			printf("Subset not found!\n");
    }
    else
    {
    	printf("Subset not found!\n");
    }
	return(0);

}