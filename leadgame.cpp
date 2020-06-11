#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll no,n,l,a,b,t=0,w=0,z1,z2;
	cin>>n;
	ll arr[n],brr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a;
		cin>>b;
		t=t+a;
		w=w+b;
		if(t>w)
		{
			l=t-w;
			z1=l;
			z2=0;
		}
		else
		{
			l=w-t;
			z2=l;
			z1=0;
		}
		arr[i]=z1;
		brr[i]=z2;
	}
	sort(arr,arr+n);
	sort(brr,brr+n);
	if(arr[n-1]>brr[n-1])
	{
		cout<<"1"<<" "<<arr[n-1];
	}	
	else
	{
		cout<<"2"<<" "<<brr[n-1];
	}
	return 0;
}
