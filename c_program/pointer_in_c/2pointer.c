#include<stdio.h>
void main()
{
	int x=5,*p,**q,***r;
	p=&x;
	q=&p;
	r=&q;
	printf("working\n"); // only for checking //
	printf("%d %d %d %d",x,p,q,r);
	return 0;
}
