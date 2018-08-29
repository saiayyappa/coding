/*Consonants Rotated String
The program must accept the value of a string S and an integer N as input. The program must rotate the consonants (anti-clockwise direction) in
the string by N times. Finally, the program must print the rotated string as the output.
Boundary Condition(s):
2 <= Length of String S <= 1000
1 <= N <= 50
Input Format:
The first line contains the value S and value of N separated by a space.
Output Format:
The first line contains the rotated string.
Example Input/Output 1:
Input:
aabaajaaks 2
Output:
aakaasaabj
Example Input/Output 2:
Input:
helloworld 5
Output:
ledhololwr*/

#include <iostream>
#include<cstring>
using namespace std;

int main(int argc, char** argv)
{
char a[1000],s[1000],c[1000];
int i,j=0,n,b[1000],x,k=0,h=0,m;
cin>>a;
cin>>x;
n=strlen(a);
for(i=0;i<n;i++)
{
    if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
    {
        b[j]=i;
        j++;
    }
}
if(x>j)
{
x=(x%j);
}
for(i=x;i<j;i++)
{
    m=b[i];
    c[k]=a[m];
    k++;
}
for(i=0;i<x;i++)
{
    m=b[i];
    c[k]=a[m];
    k++;
}
for(i=0;i<n;i++)
{
    if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
    {
        cout<<c[h];
        h++;
    }
    else
    {
        cout<<a[i];
    }
}
}
