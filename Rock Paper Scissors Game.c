
/*Rock Paper Scissors Game
Two players are playing Rock - Paper - Scissors game. The program must accept an integer N (number of rounds) as the input. The winner in
each round is decided based on the following priority. Rock has more priority than scissors, scissors has more priority than paper and paper has
more priority than rock. The program must print the player who wins the match as the output. If no one wins the match, then "Tie"is printed as
the output.
Boundary Condition(s):
1 <= N <= 50
Input Format:
The first line contains the value of N.
The next N lines contain the choice of the two players each separated by space.
Output Format:
The first line contains either Tie or name of the player who wins the match.
Example Input/Output 1:
Input:
5
rock rock
paper rock
scissors paper
scissors rock
paper paper
Output:
1
Explanation:
At the end of 1st round, no one won the game.
At the end of 2nd round, the 1st player won the game.
At the end of 3rd round, the 1st player won the game.
At the end of 4th round, the 2nd player won the game.
At the end of 5th round, no one won the game.
At the end of all rounds, the 1st player won more matches than the 2nd player.
So, 1 is printed as output.
Example Input/Output 2:
Input:
3
paper scissors
paper paper
scissors scissors
Output:
2
Example Input/Output 3:
Input:
4
rock scissors
scissors rock
paper rock
rock paper
Output:
Tie*/
/*

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{ 
    int n,i,c=0,m=0,d,e;
    char a[100][10],b[100][10]; 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%10s%10s",a[i],b[i]);
    for(i=0;i<n;i++)
    {
        d=strlen(a[i]);
        e=strlen(b[i]);
        if((d==4) && (e==5))
        m=m+1;
        else if((d==4) && (e==8))
        c=c+1;
        else if((d==5) && (e==8))
        m=m+1;
        else if((d==5) && (e==4))
        c=c+1;
        else if((d==8) && (e==4))
        m=m+1;
        else if((d==8) && (e==5))
        c=c+1;
    }
    if(c<m)
    printf("2");
    else if(m<c)
    printf("1");
    else
    printf("Tie");
    return 0;
    }*/


#include <stdio.h>

int main()
{
   int i,n,j,t=0,p=0;
   char a[1000],b[1000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%s",a);
       scanf("%s",b);
       
       if(a[0]=='p')
	{
	    if(b[0]=='s')
	    {
	        t++;
	    }
	    else if(b[0]=='r')
	    {
	        p++;
	    }
	}
	else if(a[0]=='s')
	{
	    if(b[0]==('r'))
	    {
	        t++;
	    }
	    else if(b[0]=='p')
	    {
	        p++;
	    }
	}
	else if(a[0]=='r')
	{
	    if(b[0]=='p')
	    {
	        t++;
	    }
	    else if(b[0]=='s')
	    {
	        p++;
	    }
	}
	

}
//printf("%d%d",p,t);
	    if(p>t)
	    {
	     printf("1");

	    }
	    else if(p<t)
	    {
	     printf("2");
	    }
	    else if(p==t)
	    {
	   printf("Tie");

	    }
	
}

