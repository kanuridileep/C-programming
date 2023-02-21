//Write a c program find 2nd highest among n numbers
#include <stdio.h>
int main()
{
	int n,k,big,i=1,sec_big;
	printf("enter elements size:");
	scanf("%d",&n);
	printf("enter elements:\n");
	while (i<=n)
	{
		scanf("%d",&k);  
	    if (k>big) 
	    {
            sec_big = big;
            big = k;
        } else if (k>sec_big)
	{   
            sec_big = k;
        }
		i++;
	}
	printf("%d is second highest number",sec_big);
}
