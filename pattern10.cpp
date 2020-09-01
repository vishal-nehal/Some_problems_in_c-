/*
15 14 13 12 11
10 9  8  7
6  5  4  
3  2
1
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num ;
	for(int i =1 ; i<=n;i++)
	  num +=i;
	for(int i = 0 ; i<n;i++)
	{
		for(int j = 0 ; j<n-i;j++)
		   {
		   	cout<<num<<" ";
		   	num--;
		   }
		   cout<<"\n";
	}
}
