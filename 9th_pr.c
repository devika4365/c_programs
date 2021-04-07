/*reverse*/
#include<stdio.h>
int main()
{
	int a,b,t=0;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		t=t*10+b;
	}
	printf("%d",t);
	return 0;
}
