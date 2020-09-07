/* Takes Something Returns nothing */

#include<stdio.h>
void add(int,int);
void main()
{
	int x,y;
       	printf("Enter two number");
       	scanf("%d%d",&x,&y);
	add (x,y);       //Actual Arguments  : call by value

}
void add(int a,int b)        //Formal Arguments
{
       	int c;
       	c=a+b;
	printf("sum of %d",c);
}

