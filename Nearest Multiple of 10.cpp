/*Nearest Multiple of 10
The program must accept an integer N as the input. The program must print the nearest multiple of 10 as the output.
Note: If the value of N has two nearest multiples, then the smaller multiple should be printed as the output.
Boundary Condition(s):
10 <= N <= 999999999
Input Format:
The first line contains the value of N.
Output Format:
The first line contains the nearest multiple of 10.
Example Input/Output 1:
Input:
551
Output:
550
Example Input/Output 2:
Input:
9999999
Output:
10000000*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
int n,i,j;
cin>>n;
int a=n%10;
if(a<=5)
{
    n=n-a;
}
else if(a>5)
{
    n=n+(10-a);
}
cout<<n;
}
