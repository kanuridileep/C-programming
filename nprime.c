//
#include <stdio.h>
int main()
{
	int n,i,c=0,k,count;
	printf("prime numbers upto:");
	scanf("%d",&k);
	for (n=2;n<=k;n++)
	{
		count=0;
		for (i=2;i<=n/2;i++)
		{
		    if (n%i==0)
			{count++;
			break;
			}
		
		}
		if (count==0)
		{
		printf("%d\n",n);
		c++;
	    }
	}
	printf("Count of prime numbers=%d",c);
	return 0;
}
