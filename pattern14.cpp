#include <stdio.h>
#include<math.h>

int series(int count)

{

    int num=0,i;

    for(i=0;i<count;i++)

    {

        num = num+count*pow(10,i);

    }

    return num;

}

int main()

{

    int n,count=1;

    scanf("%d",n);
    while(count<=n){

   printf("%d ",series(count)) ;

   count++;
}
return 0;
    }
