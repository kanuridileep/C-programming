#include <stdio.h>
void main()
{
	int n,t,f=1;
	printf("enter a number:");
	scanf("%d",&n);
	t=n;
	while (n!=0)
	{
		f=n*f;
		n--;
	}
	printf("factorial of %d = %d",t,f);
}
