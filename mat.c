#include<stdio.h>
main()
{
	int a[8][8],i,j,k,m,n;
	printf("enter the value of m and n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	printf("enter the no.");
	scanf("%d",&k);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==k)
			{
				a[i][j]=1;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
