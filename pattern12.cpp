/*

*
* *
*  *
*   *
*    *
*   *
*  *
* *
*

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1 ; i<=n;i++)
	{
		if(i == 1 || i == 2*n)
		   cout<<"*"<<endl;
		else 
		{
		  int x=i-1;
			cout<<"*";
			while(x--)
			cout<<" ";
		cout<<"*"<<endl;
		
		}
	}
	for(int i = 1 ;i<=n ; i++)
	{
	       int x=n-i + 1;
			cout<<"*";
			while(x--)
			cout<<" ";
			if(i!=n)
		   cout<<"*"<<endl;	
	}
}




/* correct code

#include<stdio.h>
void main()
{
  int n,i,j;
  printf("enter the value of n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("*");
    if(i==1){printf("\n");}
    for(j=1;j<i;j++)
    {
      printf(" ");
    }
    if(i!=1)
    {
    printf("*\n");
    }
  }
  for(i=n-1;i>0;i--)
  {
    printf("*");
    if(i==1){printf("\n");}
    for(j=1;j<i;j++)
    {
      printf(" ");
    }
    if(i!=1)
    {
    printf("*\n");
    }
  }
}

*/

