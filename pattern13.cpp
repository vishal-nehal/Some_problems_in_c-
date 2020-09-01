/*
	 1
 	 2 3
4 5 6
	7 8 9 10

*/

#include <stdio.h>

int main()
{
   int n,i,j,k,sp;
   printf("Enter the number : ");
   scanf("%d",&n);
   k=1;
   sp=2*(n)-3;
   for(i=1;i<=n;i++)
   {
       if(i==1)
       {
           for(j=1;j<2*n;j++)
            {
                printf(" ");
            }
           printf("%d",k);
           k++;
       }
       else if(i%2==0)
          {
            for(j=1;j<2*n;j++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {printf("%d",k);
                k++;
            }
          }
       else
       {
           
           for(j=1;j<=sp;j++)
           {
               printf(" ");
               
           }
           for(j=1;j<=i;j++)
           {
               printf("%d",k);
               sp-=2;
               k++;
           }
            sp-=2;
       }
       printf("\n");
       }
       return 0;
   }
