//to print even sum and odd sum and their difference among n numbers.
#include <stdio.h>
int main()
{
	int n,k,i=1,esum=0,osum=0,diff=0;
	printf("enter lenght");
	scanf("%d",&n);
	printf("%d elements\n",n);
	while (i<=n)
	{
		scanf("%d",&k);
		if (k%2==0){
			esum+=k;
		}
		else
		{
			osum+=k;
		}
		i++;
	}
	diff=esum-osum;
		printf("\nevensum=%d",esum);
		printf("\nodd sum=%d",osum);
		printf("\ndifference=%d",diff);
		return 0;
}

