#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		 int c=0;
	    cin>>n;
	    for(int i=2;i<n/2;i++)
	    {
	        if(n%i==0)
	            c=1;
	    }
	    if(c==0||n==2)
	        cout<<"yes"<<endl;
	    else 
	        cout<<"no"<<endl;
}
	return 0;
}
