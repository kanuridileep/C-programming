//Find whether the given number is prime number or not.
#include <stdio.h>
int main()
{
	int n,i=2,flag=0;
	printf("enter a number:");
	scanf("%d",&n);
	while (i<=n/2)
	{
		if (n%i==0)
		{
		flag=1;
		break;
		}
		i++;
	}
	if (flag==0)
	printf("prime");
	else
	printf("not prime");
	return 0;
}
