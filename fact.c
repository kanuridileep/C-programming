#include <stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("enter a number:");
	scanf("%d",&n);
	while (i<=n)
	{
		f=i*f; 
		i++;;
	}
	printf("factorial=%d",f);
	return 0;																																				
}
