#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int n,l,count=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		while(arr[i]>0)
		{
				if((arr[i]%10)==4)
		{
		count=count++;
    	}
    	arr[i]=arr[i]/10;
    }
    	cout<<count<<endl;
    	count=0;
}
	return 0;
}
