#include <stdio.h>
main()
{
	int i=65,j;
	while (i<=90)
	{
		j=65;
	   while (j<=i)
	   {
	    	printf("%c",j);
		    j++;
	    }
	    printf("\n");
		i++;
    }
}
