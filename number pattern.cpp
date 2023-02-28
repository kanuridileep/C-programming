#include <stdio.h>
int main()
{
	int i=1,j=1,rows;
	printf("enter rows:");
	scanf("%d",&rows);
	while (i<rows)
	{
		j=1;
		while (j<=i)
		{
			printf("%d ",j);
			j++;
		}
		printf("\n");
		i++;
	}
	
	while (i>=1)
	{
		j=1;
		while (j<=i)
		{
		   printf("%d ",j);
		   j++;	
		}
		printf("\n");
		i--;;
	}
	return 0;
}
