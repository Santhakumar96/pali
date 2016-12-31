#include<stdio.h>
main()
{
	int a[100],i,c=0,n,x;
	printf("enter the size");
	scanf("%d",&n);
	printf("\nenter the numbers ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe number to be searched");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			c++;
		}
	}
	printf("\nthe element %d has occured %d times in this array\n",x,c);
}
