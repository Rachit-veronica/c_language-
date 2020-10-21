#include<stdio.h>
int main()
{
      	int x[50];
	gets(x);
	 printf("%d\n",x);
	 printf("%d",&x);
	printf("%d",*&x);
      return 0; 
}

