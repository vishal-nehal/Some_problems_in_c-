/*
Question: Write a program in C such that it takes a lower limit and upper limit as inputs and print
all the intermediate pallindrome numbers.
Test Cases:
TestCase 1:
Input :
10 , 80
Expected Result:
11 , 22 , 33 , 44 , 55 , 66 , 77.
Test Case 2:
Input:
100,200
Expected Result:
101 , 111 , 121 , 131 , 141 , 151 , 161 , 171 , 181 , 191.

*/

#include<bits/stdc++.h>
using namespace std;
int pelindrome(int i)
{
	int n=i;
	vector<int> ar;
	int x;
	while(n>0)
	{
	  x=n%10;
	  n=n/10;
	  ar.push_back(x); 	
	}
	int s=ar.size();
	int flag =1;
	for(int k=0;k<=s/2;k++)
	{
		if(ar[k] == ar[s-k-1])
		   {
		      continue;	
		   }
		   else 
		     {
		     	flag = 0;
		     	break;
			 }	
	}
	if(flag == 1)
	  return i;
	else 
	  return 0;
	
}
int main()
{
	int lower,uper,x;
	cin>>lower>>uper;
	for(int i=lower;i<=uper;i++)
	{
		//cout<<<<endl;
		x=pelindrome(i);
		if(x!=0)
		  cout<<x<<" ";
	}	
}

