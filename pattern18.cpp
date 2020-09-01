/*       
          *
           *
            *
             *
              *
               *
      ***********
	           *
			  *
			 *
			*
		   *
		  * 
		    
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x=4;
	while(x<=n-2)
	{
		for(int i =1;i<=x;i++)
		   cout<<" ";
		cout<<"*"<<endl;;
		x++;	
	}
	for(int i=1;i<=n;i++)
	  cout<<"*";
	cout<<"\n";
	int y = n-2;
	while(y >= 4)
	{
		for(int i =y;i>=1;i--)
		   cout<<" ";
		cout<<"*"<<endl;;
		y--;	
	}
	
	
}
