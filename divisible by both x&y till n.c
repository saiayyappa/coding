#include <stdio.h>
int main()
{  
    int x,y,n,c=1,i=1;
    scanf("%d",&x);
    scanf("%d",&y);  
    scanf("%d",&n);
   for(i=x;n!=0;i++)  
    {      
        if((i%x==0) || (i%y==0)) 
        {          
            printf("%d ",i);  
            n--;    
            }    
    }
}

ip:

3
7
10

op:

3 6 7 9 12 14 15 18 21 24
