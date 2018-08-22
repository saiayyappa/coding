/*
Rotation Count in Anti-clockwise Direction
The program must accept a rotated sorted(ascending order) array of size N as input. The program must print the rotation count to form the
original sorted array in anti-clockwise direction as the output.
Boundary Condition(s):
3 <= N <= 99
Input Format:
The first line contains the value of N.
The second line contains the elements of the rotated sorted array.
Output Format:
The first line contains the rotation count.
Example Input/Output 1:
Input:
5
30 40 50 20 25
Output:
3
Explanation:
The array should be in the increasing order. So, the original sorted array must be 20 25 30 40 50. Inorder to get this sorted array from the
rotated sorted array, 3 rotations are needed in counter clockwise direction. Hence, 3 is printed as the output.
Example Input/Output 2:
Input:
8
20 10 11 12 13 14 14 15
Output:
1

*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
int a[1000],i,n,c=0;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{c++;
    if(a[i]>a[i+1])
    {
        break;
    }
}
    if(c==n)
    {
        c=0;
    }

cout<<c;

}
