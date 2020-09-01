/*
1
11
101
1001
10001
100001
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
     for(int i =0 ;i<n;i++)
	 {
	 	for(int j = 0;j<=i;j++)
	 	{
	 		if(j == 0 || j == i)
	 		  cout<<"1"<<" ";
	 		else
	 		  cout<<"0"<<" ";
		 }
		 cout<<"\n";
	 }	
}
