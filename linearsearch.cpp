#include<iostream>
using namespace std;
int main()
{
	int n,i,key;
	cout<<"Enter the size of array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array\n";
	for(i=0;i<n;i++){
		cin>>arr[i];
	} 
	cout<<"Enter the element to find\n";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key){
			cout<<"Element found at "<<i<<" index";
			break;
		}
	}
	if(i>=n)
	cout<<"-1";
	return 0;
}
