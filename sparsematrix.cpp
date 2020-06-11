#include<iostream>
#include<conio.h>
using namespace std;
struct sparse{
	int row;
	int col;
	int val;
};
int main()
{
	int size=0;
	int m,n;
	int arr[10][10];
	cout<<"Enter the size of the 2D matrix\n";
	cin>>m>>n;
	cout<<"Enter the elements of the 2D matrix\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
	if(arr[i][j]!=0){
		size+=1;
	}
}
}
sparse spm[size];
int count=0;
for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
	if(arr[i][j]!=0){
		spm[count].row=i;
		spm[count].col=j;
		spm[count].val=arr[i][j];
		count++;
	}
}
}
cout<<"\nThe sparse matrix of the 2D matrix is\n";
cout<<"ROW  \tCOLUMN  \tVALUE\n";
for(int i=0;i<size;i++){
	cout<<spm[i].row<<"\t\t"<<spm[i].col<<"\t\t"<<spm[i].val<<endl;
}
return 0;
}
