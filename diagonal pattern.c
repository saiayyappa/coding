/*
ip:
3 3
1 2 3
4 5 6
7 8 9

op:

1 * 3
* 5 *
7 * 9

*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,a[1000][1000],b[1000][1000],n,m;
scanf("%d",&n);
m=n-1;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n;i++)
{
    b[i][m]=a[i][m];
    for(j=0;j<n;j++)
    {
        if(i==j)
        {
            b[i][j]=a[i][j];
        }
    }
    m--;
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(b[i][j]!='\0')
        {
            printf("%d ",b[i][j]);
        }
        else
        {
            printf("* ");
        }
    }
    printf("\n");
}

}
