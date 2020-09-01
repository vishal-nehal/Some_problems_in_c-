//METHOD - 1 this aproach is of O(n2)
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string str1,str2;
//	cin>>str1>>str2;
//	int count=0;
//	if(str1.size() == str2.size())
//	{
//		for(int i =0;i<str1.size();i++)
//		{
//			for(int j =0;j<str2.size();j++)
//			{
//				if(str1[i]==str2[j])
//				   count++;
//			}
//		}
//		if(count == str1.size())
//		{
//			cout<<"strings are anagram";
//			return 0;
//		}
//	else 
//	   {cout<<" NOT Anagram strings";
//	     return 0;
//	   }
//	}
//	else
//		cout<<" NOT Anagram strings";
//		return 0;
//}



//MEHOD-2 this aproach is of O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2;
    cin>>str1>>str2;	
	int arr[26] = {0};
	for(int i =0;i<str1.size();i++)
	{
		arr[str1[i] - 97] ++;
	}
	for(int j =0;j<str2.size();j++)
	{
		arr[str2[j] - 97]--;
	}
	int count = 0;
	for(int i =0;i<26;i++)
	{
		if(arr[i] !=0)
		  count++;
	}
	if(count !=0)
	  cout<<"not anagram string ";
	else
	  cout<<"yes anagram string ";
}


