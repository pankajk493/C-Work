#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int rev=0,no,b,m;
		cin>>no;
		m=no;
		rev=0;
		for(int a=1;no!=0;a++)
		{
			b=no%10;
			no=no/10;
			rev=rev*10+b;
	    }
		if(rev==m)
		{
			cout<<"wins";
		}
		else
		{
			cout<<"losses";
		}
	}
	return 0;
}
