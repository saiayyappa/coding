
/*Check if N is Formed from M
The program must accept two integers M and N as input. The program must print"YES" if an integer N is formed from the digits of M. Else the
program must print"NO" as the output.
Boundary Condition(s):
1 <= M, N <= 999999999
Input Format:
The first line contains the value of M.
The second line contains the value of N.
Output Format:
The first line contains "YES" or "NO".
Example Input/Output 1:
Input:
12345
45321
Output:
YES
Example Input/Output 2:
Input:
5555
65
Output:
NO
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
char a[1000],b[1000],d[1000],e[1000];
int i,j,n,m,f=0,k=0,c=0,y=0;
scanf("%s%s",a,b);
n=strlen(a);
m=strlen(b);
for(i=0;i<m;i++)
{
    f=0;
 for(j=0;j<n;j++)
 {
     if(b[i]==a[j] && a[j]!='-')
     {
         f=1;
         a[j]='-';
        break;
     }
 }
 if(f==0)
 {
   k=1;
 }
}
if(k==1)
{
    printf("NO");
}
else
{
    printf("YES");
}

}
