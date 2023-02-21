#include <stdio.h>
int main()
{
	int n,k,i,low;
	printf("enter size of numbers:");
	scanf("%d",&n);
	printf("enter elements\n");
	scanf("%d",&k);
	low=k;
	i=2;
	while (i<=n)
	{
		scanf("%d",&k);
		if (k<low)
		{
		low=k;
	    }
		i++;
	}
	printf("%d is lowest number",low);
	return 0;
}
