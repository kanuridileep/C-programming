#include <stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("enter table no:");
	scanf("%d",&n);
	while (i<=10)
	{
		f=n*i;
		printf("%d X %d = %d\n",n,i,f);
		i++;
	}
	return 0;
}
