/*
1
1 2
1 2 3
1 2 3 5
1 2 3 5 7

*/



#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
   ll n;
   cin>>n;
   vector<ll> a;
   for(ll i=1;i<pow(10,5);i++)
   {
   	if(i==1 || i==2)
   	{
   		a.push_back(i);
	}
	else 
	{
//		cout<<"hello";
		int flag=0;
		for(ll j=2;j<i;j++)
		{
			if(i % j == 0)
			{
				flag=1;
			}
		}
		if(flag == 0)
		{
			a.push_back(i);
		}
	}
}
	for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<=i;j++)
		  {
		  	cout<<a[j]<<" ";
		  }
		  cout<<"\n";
	}
	
   
	return 0;
}


