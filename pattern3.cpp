/*
11111
11122
11333
14444
55555
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i =1;i <=n;i++)
	{
		for(int j = 1 ; j<= n ;j++)
		{
			if(j <= n-i)
			 cout<<"1";
			else
			 cout<<(i);
		}
		cout<<"\n";
	}
}
