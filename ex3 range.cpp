//print n1 to n2 odd numbers except 3rd number in the range.
#include <stdio.h>
int main()
{
	int n1,n2,i,count=0;
	printf("starting range:");
	scanf("%d",&n1);
	printf("ending range:");
	scanf("%d",&n2);
	printf("Odd numers between %d to %d except 3rd range number are:\n",n1,n2);
	for (i=n1;i<=n2;i++)
	{
		if (i%2!=0) 
		{
			count++;
			if (count!=3)
			{ 
			printf("%d\n",i);
	     	}
		}
	}
	return 0;
}
