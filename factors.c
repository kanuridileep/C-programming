//factors of given number
#include <stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter a number to find factors:");
	scanf("%d",&n);
	printf("1\n");
	for (i=2;i<=n/2;i++)
	{
		if (n%i==0)
		{
			printf("%d\n",i);
			count++;
		}
	}
	printf("%d\n",n);
	printf("total factors=%d",count+=2);
	return 0;
}
