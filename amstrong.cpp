//C program to print given number is Armstrong number or not
#include <stdio.h>
int main()
{
	int n,t,cube,r,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	t=n;
	while (n!=0)
	{
		r=n%10;
		cube=r*r*r;
		sum+=cube;
		n/=10;
	}
	if (sum==t )
	printf("%d is amstrong number",t);
	else
	printf("%d is not an amstrong number",t); 
	return 0;
}
