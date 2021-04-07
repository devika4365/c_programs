#include<stdio.h>
int main()
{
	int a,b,c;
	
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greater value",a);
	}
	
	else if(b>a && b>c)
	{
		printf("%d is greater value",b);
	}
	else
	{
		printf("%d is the greater value",c);
	}
	return 0;
}
