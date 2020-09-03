#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number");
	scanf("%d",&x);

	x>0 ? printf("Positive") : printf("Non positive");
	return 0;
}
