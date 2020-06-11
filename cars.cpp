#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],price;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		price=arr[i];
		cout<<price;
	}
	return 0;
}
