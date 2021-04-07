#include<stdio.h>
int main()
{
	int a,b,i,g=0;
	scanf("%d%d",&a,&b);
	while(1)
	{
		i=a%10;
		a=a/10;
		if(i==b)
		{
		g=1;
		break;
	    }
	}
		
    if(g==1)
    printf("Digit is there in number");
	else
	printf("Digit is not there in number");
	return 0;
}
