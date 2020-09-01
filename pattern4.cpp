/*
input : 12,14,34,87,95,43
output: 5,17,41,113,100,25
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {12,14,34,87,95,43};
	int arr2[6];
	for(int i = 0 ;i<6;i++)
	{
		int x = arr[i];
		arr2[i] = (((x/10)*(x/10)) + ((x%10)*(x%10)));
		
	}
	for(int i = 0 ; i<6 ; i++)
	  cout<<arr2[i]<<" ";
	
	
}
