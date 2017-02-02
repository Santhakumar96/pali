#include<stdio.h>

int main(void)
{
        int a[10],i,s;
        for(i=0;i<5;i++)
         {
                  scanf("%d",&a[i]);
        }
        scanf("%d",&s);

       for(i=0;i<5;i++)
       {
               if(a[i]==s)
               {
                        printf("%d",i);
               }
        }
      return 0;
}
