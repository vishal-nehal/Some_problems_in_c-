/*
1->2
   |	
4<-3
|
5->6
   |	
8<-7
*/
#include <stdio.h>
int main()
{
   int n,i,p,j;
   printf("Enter the number : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(i%2!=0)
       {
           p=2*i-1;
           printf("%d->%d\n",p,p+1);
           printf("   |\n");
       }
       else
       {
           p=2*i;
           printf("%d<-%d\n",p,p-1);
           
             printf("|\n");
       }
    }
    
   return 0;
}

