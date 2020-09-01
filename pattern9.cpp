/*
1  2  3  4  5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8 
13 12 11 10 9
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	int num = 1;
	for(int i = 0 ;i<n;i++)
	{
		for(int j = 0 ; j<n;j++)
		{
		    arr[i][j] = num;
			num++;
			if(j == n-1)
			{
				break;
			}	
	    }
	    arr[i][j] == num;
	    num++;
	    if(i == n-1)
	    {
	    	for(int j=i-1;j>=0;j--)
	    	   {
	    	   	arr[i][j] = num;
	    	   	num++;
			   }
		}
	}

}
