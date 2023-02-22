//C a program to print reverse of the given number
#include <stdio.h>
int main()
{
	int n,rev=0,r;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}
	printf("reversed number=%d",rev);
	return 0;
}
