/*palindrome*/
#include<stdio.h>
int main()
{
	int a,b,c,t=0;
	scanf("%d",&a);
	c=a;
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		t=t*10+b;
	}
	if(c==t)
	printf("palindrome");
	else
	printf("not a palindrome");
	
	return 0;
}
