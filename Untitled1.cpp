#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k,t,j,m;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		int arr[n],brr[n];
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		if(n%2!=0 && (k-1)>=n/2)a[n/2]=0;
		k%=3*n;
		for(int h=0;h<n;h++){
			brr[h]=arr[h];
		}
		for(m=0;m<k;m++)
		{
			brr[m%n]=brr[m%n]^brr[n-1-(m%n)];
		}
		for(int z=0;z<n;z++)
		{
			cout<<brr[z]<<" ";
     	 	
        }
	}
	return 0;
}
