#include <stdio.h>
int main()
{
	int n,i,f=1;
	printf("enter table number:");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		f=n*i;
		printf("%d X %d = %d\n",n,i,f);
	}
	return 0;
}
