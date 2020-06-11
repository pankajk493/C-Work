#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    { 
        long int n;
        cin>>n;
        long int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int max=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<i;j++)
            {
                if(arr[j]%arr[i]==0)
                count++;
            }
            if(count>max)
            max=count;
        }
        cout<<max<<endl;
    }
	return 0;
}
