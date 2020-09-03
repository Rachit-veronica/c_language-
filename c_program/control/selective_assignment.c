#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter three number");
	scanf("%d%d%d",&x,&y,&z);

	printf("%d",x>y ? x>z ? x:y :  y>z ? y:z);

	return 0;
}


