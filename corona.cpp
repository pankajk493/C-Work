#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int arr[n],brr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
			for(int k=0;k<n;k++)
			{
				if(arr[j]==1)
				{
					brr[k]=arr[j];
					cout<<brr[j];
				}
			}
		}
		}	
	return 0;
}
