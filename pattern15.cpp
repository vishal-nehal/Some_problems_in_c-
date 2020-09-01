/*
A,AB,ABC,ABCD,
*/
#include <stdio.h>
void generate(int digit)
{
    int i,k=65;
    char st[digit+1];
    for(i=0;i<digit;i++)
    {
        st[i]=k+i;
    }
    st[i]='\0';
    printf("%s,",st); 
  }
int main()
{
    int n,i;
    printf("Enter the count : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        generate(i);
    }
    return 0;
}
