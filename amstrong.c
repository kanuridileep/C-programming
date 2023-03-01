//check whether the given number is amstrong or not
#include <stdio.h>
int main()
{
	int n,r,cube,temp,sum=0;
	printf("enter a numnber:");
	scanf("%d",&n);
	temp=n;
	while (n>0)
	{
		r=n%10;
		cube=r*r*r;
		sum+=cube;
		n/=10;
	}
	 if (temp==sum)
	 	printf("%d is Amstrong",sum);
	 	else 
	 	printf("%d is Not Amstrong",sum);
	return 0;
}
