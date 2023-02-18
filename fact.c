#include <stdio.h>
int main()
{
	int k,i=1,n,esum=0,osum=0;;
	printf("divisibility numbers upto:");
	scanf("%d",&n);
	printf("enter divisibility number:");
	scanf("%d",&k);
	printf("numbers divisible by %d are:\n",k);
	while (i<=n)
	{
		if (i%k==0)
		{
		printf("%d\n",i);
		if (i%2==0)
		{
		esum+=i;
	    }
		else
		{ 
		osum+=i;
	    }
	    }
		i++;
	
	}
	printf("even sum=%d\n",esum);
	printf("odd sum=%d",osum);
	return 0;
	
}
