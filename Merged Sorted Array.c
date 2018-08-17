/*

Merged Sorted Array
The program must accept two sorted arrays of size M and N as input. The program must print the merged sorted array as the output.
Boundary Condition(s):
1 <= M, N <= 20
Input Format:
The first line contains the value of M and N separated by space.
The second line contains the M elements separated by space(s).
The third line contains the N elements separated by space(s).
Output Format:
The first line contains the merged sorted array separated by space(s).
Example Input/Output 1:
Input:
4 3
9 7 7 4
7 6 3
Output:
9 7 7 7 6 4 3
Example Input/Output 2:
Input:
5 4
12 11 10 9 8
8 7 6 5
Output :
12 11 10 9 8 8 7 6 5*/




#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[20],b[20],c[40],m,n,i,j=0,t,l;
scanf("%d\t%d",&m,&n);
for(i=0;i<m;i++)
{
    
    scanf("%d\t",&a[i]);
}
for(i=0;i<n;i++)
{
    scanf("%d\t",&b[i]);
    
}
for(i=0;i<m+n;i++)
{
    if(i<m)
    c[i]=a[i];
    else
    {
        c[i]=b[j];
        j++;
    }
}
l=m+n;
for(i=0;i<l-1;i++)
{
    for(j=i+1;j<l;j++)
    {
        if(c[i]<c[j])
        {
            t=c[j];
            c[j]=c[i];
            c[i]=t;
        }
    }
}
for(i=0;i<l;i++)
printf("%d\t",c[i]);
}
