/******************************************************************************

                            Online Java Debugger.
                Code, Run and Debug Java program online.
Write your code in this editor and press "Debug" button to debug program.

*******************************************************************************/

import java.io.*;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    String a=sc.nextLine();
	    String g="";
	    int i=0,j,h;
	    String b[]=a.split("_");
	    char c[]=b[0].toCharArray();
	    h=c.length-1;
	    c[h]=Character.toUpperCase(c[h]);
	    
	    for(i=h;i>=0;i--)
	    {
	         g=g+c[i];
	    }
	    System.out.println(g);
	    for(j=1;j<b.length;j++)
	    {
	     System.out.println(b[j]);
	    }
	}
}


/*
ip: hello_world

op:
Olleh
world


ip:
hello_

op:
Olleh
*/
