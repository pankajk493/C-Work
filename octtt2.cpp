#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    ll t;
    cin>>t;
    for(ll k=0;k<t;k++)
	{
        ll n,m,q;
        cin>>n>>m>>q;
        ll arr[n][m],brr[n],crr[m];
         for(ll i=0;i<n;i++)
		 {
             for(ll j=0;j<m;j++)
			 {
                 arr[i][j]=0;
             }
        }
        for(ll i=0;i<q;i++)
        {
            ll x,y;
            cin>>x>>y;
            x--;
            y--;
            brr[x]++;
            crr[y]++;
        }
        for(ll i=0;i<n;i++)
        {
        	for(ll j=0;j<m;j++){
        		arr[i][j]=crr[j];
			}
		}
		 for(ll i=0;i<m;i++)
        {
        	for(ll j=0;j<n;j++){
        		arr[i][j]=arr[i][j]+brr[j];
			}
		}
        
        ll odd=0;
        for(ll i=0;i<n;i++)
		{
             for(ll j=0;j<m;j++)
			 {
                 if(arr[i][j]%2!=0)
                 odd++;
             }
        }
       cout<<odd<<endl;
    }
	return 0;
}
