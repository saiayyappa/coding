Next Prime Number
An integer N is passed as the input to the program. The program must print the next prime number of N as the output. That is the smallest prime
number which is greater than N.
Boundary Condition(s):
1 <= N <= 10^17
Input Format:
The first line contains the value of N.
Output Format:
The first line contains the next prime number of N.
Example Input/Output 1:
Input:
8
Output:
11
Example Input/Output 2:
Input:
29
Output:
31




#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int i,j,n,c=1,t;    
    scanf("%ld",&n); 
    for(i=n+1;i<2*n;i++)
    {
        t=1;
        for(j=2;j<100000000;j++)
        {
            if(i%j==0 && j!=i) 
            {
                t=0;    
                break;
            }
        }
        if(t==1)
            break;
    }
    printf("%ld",i);
    return 0;
}
