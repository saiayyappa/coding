Matrix - Max L Sum
An integer matrix of size R rows and C columns and consisting of integer values is passed as the input. The program must print the maximum
value of the L sum.
Let us consider the 4*4 matrix given below.
1 2 3 4
5 6 7 8
9 1 0 2
3 4 5 0
All possible L shapes in the matrix are
1    2    3
5 6  6 7  7 8
5    6    7
9 1  1 0  0 2
9    1    0
3 4  4 5  5 0
The maximum sum 18 is obtained for the L shape with the values 3 7 8 (as 3+7+8 = 18).
So 18 is printed as the output.
Boundary Condition(s):
2 <= R, C <= 100
Input Format:
The first line contains R and C separated by a space.
The next R lines each containing C values separated by a space.
Output Format:
The first line contains the maximum L sum.
Example Input/Output 1:
Input:
4 4
1 2 3 4
5 6 7 8
9 1 0 2
3 4 5 0
Output:
18



#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,a[1000][1000],b[1000],c=0,s,i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>0 && j<n-1)
            {
                b[c]=a[i][j]+a[i-1][j]+a[i][j+1];
                c++;
            }
        }
    }
    s=b[0];
    for(i=0;i<=c;i++)
    {
        if(b[i]>s)
        s=b[i];
    }
    printf("%d",s);
}
