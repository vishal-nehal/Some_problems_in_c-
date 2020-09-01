/*
1 
2 6
3 7 10
4 8 11 13 
5 9 12 14 15
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		int p = i;
		int m = n-1;
		for(int j = 1 ; j<=i ; j++)
		{
		   cout<<p<<" ";
		   p=p+m;
		   m--;		
		}
		cout<<"\n";
	}
}
