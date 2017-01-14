#include <stdio.h>

int main(void)
{
    int i,j,n,a[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((j==0)||(i==j))
            {
                a[i][j]=1;
            }
            else if((i>0)&&(i>j))
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            else
            {
                a[i][j]=1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

	return 0;
}

