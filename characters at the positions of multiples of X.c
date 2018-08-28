
/*Given a string Sand an integer X as input. the program must print the characters at the positions of multiples of X until the 
last character is printed. If the multiple of X goes beyond the last character. then the string characters should be navigated 
in a cyclic manner till the last character is printed.

 Example Input/Output 1:  
 
 Input:
 denomination 8 
 
 Output: 
 aon
 
 Explanation:
 The character at the first multiple of 8 is 'a'.  Since the second multiple of 8 is beyond the last character of the string. 
 consider the string in a cyclic  manner. Then the character at the second multiple of 8 is 'o'. 
 Similarly. the character at the third multiple of 8 is In' and also it is the last character of the string.
 
 Example Input/Output 2: 
 Input:
 importance 2 
 
 Output: 
 
motne 
*/
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i,j,n,x,c=1,b;
    char y,a[1000],z;
    scanf("%s",a);
    scanf("%d",&x);
    n=strlen(a);
    y=a[n-1];
    for(i=0;i<n;i++)
    {
        if(c%x==0)
        {
            z=a[i];
            b=i;
       printf("%c",z);
        
        }
        c++;
        if(i==n-1)
        {
            i=-1;
        }
        if(b==n-1)
        {
            break;
        }
    }


}
