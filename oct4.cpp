#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,count=2;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	   cin>>n;
	   int arr[n];
	   for(int j=0;j<n;j++)
	   {
	   	cin>>arr[j];
		   }
		 for(int k=2;k<=sqrt(n);k++)
		 {
		 	if(arr(j)%k==0)
		 	{
		 		count++;
			 }
			 else
			 {
			 	continue;
			 }
			   }  	
			   cout<<count;
	}
	return 0;
}
