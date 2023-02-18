/*Write a c program to print nth multiplication table.
Example:
Input:
5
Output:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
. . . 
5 x 9 = 45
5 x 10 = 50
*/
#include <stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("enter table no:");
	scanf("%d",&n);
	while (i<=10)
	{
		f=n*i;
		printf("%d X %d = %d\n",n,i,f);
		i++;
	}
	return 0;
}
