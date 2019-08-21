#include<stdio.h>
#include<string.h>

int findpattern(char string[],char pattern[])
{
	int slen=strlen(string);
	int plen=strlen(pattern);
	int j;
	for(int i=0;i<=slen-plen;i++)
	{
		for(j=0;j<plen;j++)
		{
			if(string[i+j]!=pattern[j])
				break;
		}
		if(j==plen)
			return(1);
	}
	return(0);
}
int main()
{
	char string[100],pattern[10];
	printf("Enter string : \n");
	gets(string);
	printf("Enter pattern : \n");
	gets(pattern);
	if(findpattern(string,pattern))
		printf("String found! \n");
	else
		printf("String not found!\n");
	return(0);
}