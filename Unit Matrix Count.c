Unit Matrix Count
An N*N matrix containing 1s and 0s is given as the input to the program. The program must print the number of 2x2 unit matrices in the given
matrix. A matrix is said to be unit matrix if all the integers are 1. Also, consider the overlapping matrices.
Boundary Condition(s):
1 <= N <= 100
Input Format:
The first line contains the value of N.
The next N lines contain N elements each separated by space(s).
Output Format:
The first line contains an integer value.
Example Input/Output 1:
Input:
3
1 0 1
1 1 1
1 1 0
Output:
1
Explanation :
The number of 2*2 Unit matrix in the 3*3 matrix is 1.
1 0 1
1 1 1
1 1 0
Hence the output is 1.
Example Input/Output 2:
Input:
4
1 0 1 1
1 1 1 1
1 1 0 0
0 0 0 0
Output:
2
Explanation :
The number of 2*2 Unit matrix in the 4*4 matrix is 2.
Hence the output is 2



#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,a[1000][1000],n,c=0;    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)        
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)    
        {       
            if(a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1)
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
