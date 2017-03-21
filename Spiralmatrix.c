#include<stdio.h>
void main()
{
    int i,j,a[10][10],n,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=c++;
             }
         }
        else
        {
           for(j=n-1;j>=0;j--)
            {
               a[i][j]=c++;
            }
        } 
    }
     for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
           printf("\n");
       }
    }

    
                   
            
              
    
