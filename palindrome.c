//C a program to print given number is palindrome or not
#include <stdio.h>
int main()
{
	int n,t,rev=0,r;
	printf("enter a number");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}
	if (rev==t)
	printf("%d is palindrome",t);
	else
	printf("%d is not a palindrome",t);
	return 0;
}
