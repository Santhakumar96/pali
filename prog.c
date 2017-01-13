#include <stdio.h>

int main(void) 
{
	int i,n,sum=0;
	i=1;
	scanf("%d",&n);
	while(i<=n)
	{
	    sum=sum+i;
	    printf("%d\t",sum);
	    i++;
	}
	return 0;
}

