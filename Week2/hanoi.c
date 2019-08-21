#include <stdio.h> 
  
void towerOfHanoi(int n, char from,char to, char aux)
{  
    if (n == 1)  
    {  
        printf("Move disk 1 from rod %c to rod %c",from,to);  
        return;  
    }  
    towerOfHanoi(n - 1, from, aux, to);  
    printf("%d from rod %c to rod %c",n-1,from,to);
    towerOfHanoi(n - 1, aux, to, from);  
}  
  

int main()  
{  
    int n = 3 ;
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;  
}  
  