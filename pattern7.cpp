/*
1 2 3 4 5
2 3 4 5 1
3 4 5 1 2 
4 5 1 2 3 
5 1 2 3 4
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1 ; i<=n;i++)
	  {
	  	for(int j = i ; j<=n;j++)
	  	{
	  		cout<<j<<" ";
	  		if(j == n)
	  		{
	  		  for(int k = 1;k<i;k++)	
	  		  cout<<k<<" ";
			}
		}
		cout<<"\n";
	}	
}
