/*Takes nothing Returns Something */
#include<stdio.h>
int add(void);
void main()
{
	int s;
	s=add();
	printf("sum is %d",s);
}
int add()
{
	int a,b,c;
	printf("Enter two number");
	scanf ("%d%d",&a,&b);
	return (a+b);
}


