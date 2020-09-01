/*
1234
2341
3421
4321
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int);
int main()
{
	int n;
	cin>>n;
	pattern(n);
}
void pattern(int n)
{
	for(int i =1;i<=n;i++)
	{
		int x=i;
		for(int j=i;j<=n;j++)
		{
			
			cout<<j;
		}
		while(--x) 
		{
			cout<<x;
			
		 } 
			
		cout<<"\n";
	}
}
