#include <stdio.h>
int main()
{
	int n,sum=0,i=1,r; 
	printf("enter a number");
	scanf("%d",&n);
	while (i<=2)
	{   
	    sum=0;
		while (n>0)
		{
			r=n%10;
			sum+=r;
			n/=10;
		}
		n=sum;
		i++;
	}
		printf("sum = %d\n",sum);
	return 0;
}
