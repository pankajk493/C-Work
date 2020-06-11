#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,b,c;
	cin>>t;
    for(int i=0;i<t;i++)
	{
		cin>>n;
    b=n%10;
	while(n>=10)
	{
		n=n/10;
		}	
		c=n;
		cout<<b+c;
	}
	
	return 0;
}


