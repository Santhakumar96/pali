#include <stdio.h>

int main(void)
{
	int i,j,a[5][5];
	for(i=0;i<=4;i++)
	{
	    for(j=0;j<=i;j++)
	    {
	        printf("\t *");
	    }
	    printf("\n");
	}
	return 0;
}

