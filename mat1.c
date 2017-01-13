#include <stdio.h>

int main(void)
{
    int i,j,a[10][10];
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((j==i)||(j==1))
            {
                a[i][j]=1;
            }
            else
        {
            a[i][j]=i;
        }
        }
    }
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

	
	return 0;
}

