/*
1,12,123,1234,12345 
*/
#include<stdio.h>
#include<math.h>
int pattern(int);
int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d ",pattern(i));
		i++;
	}
	return 0;
}
int pattern(int n)
{
	int sum = 0;
	for(int i = 1 ;i<=n;i++)
	   sum = sum*10 + i;
	return sum;
	
}

