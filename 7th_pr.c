#include<stdio.h>
int main()
{
	int a,i,z_c=0,o_c=0,e_c=0;
	scanf("%d",&a);
	while(1)
	{
		if (a==0)
		break;
		i=a%10;
		a=a/10;
		if(i==0)
		z_c+=1;
		else if(i%2==0)
		e_c+=1;
		else
		o_c+=1;
	}
	printf("%d is a zero count\n %d is a even count\n%d is a odd count",z_c,e_c,o_c);
	return 0;
}
