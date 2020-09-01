/*
input - 76 85 94 12 26 37
output - 13 39 65 3 32 40
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		int x;
		cin>>x;
		int y= abs((x/10)*(x/10) - (x%10)*(x%10));
		cout<<y<<endl;
		
	}
}
