/*Takes nothing, return nothing */

#include<stdio.h>
void main()
{
	void add(void);
	add ();
}
void add()
{
	int a,b,c;
	printf("Enter two number");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum of %d",c);
}
