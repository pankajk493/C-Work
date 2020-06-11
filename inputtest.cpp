#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,k,c=0;
	cin>>n>>k;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		if(a%k==0){
			c++;
		}
	}
	cout<<c;
	return 0;
}
