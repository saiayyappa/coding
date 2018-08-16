/*
Top Bottom Alternate - Pattern Printing
The program must accept an integer N as the input. The program must print the pattern as shown in the Example Input/Output section.
Boundary Condition(s):
2 <= N <= 20
Input Format:
The first line contains the value of N.
Output Format:
The N lines contain the pattern as shown in the Example Input/Output section.
Example Input/Output 1:
Input:
4
Output:
1*2*3*4
9*10*11*12
13*14*15*16
5*6*7*8
Example Input/Output 2:
Input:
7
Output:
1*2*3*4*5*6*7
15*16*17*18*19*20*21
29*30*31*32*33*34*35
43*44*45*46*47*48*49
36*37*38*39*40*41*42
22*23*24*25*26*27*28
8*9*10*11*12*13*14


*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
int i,j,a[1000][1000],n;
cin>>n;
int c=n,k=1,h=-1;
for(i=0;i<n;i++)
{
    if(i%2==0)
    {
        h++;
    }
    else if(i%2==1)
    {
        c--;
    }
    for(j=0;j<n;j++)
    {
    if(i%2==0)
    {
       a[h][j]=k;
       k++;
    }
    else if(i%2==1)
    {
        a[c][j]=k;
        k++;
    }
    }
    
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cout<<a[i][j];
        if(j!=(n-1))
        cout<<"*";
    }
    cout<<"\n";
}

}
