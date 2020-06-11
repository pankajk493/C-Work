#include<iostream>
using namespace std; 
#define m 2
#define n 2  
void row_sum(int arr[m][n]) 
{ 
  
    int i,j,sum = 0;  
    cout << "\nFinding Sum of each row:\n\n"; 
    for (i = 0; i < 4; ++i) { 
        for (j = 0; j < 4; ++j) { 
            sum = sum + arr[i][j]; 
    }
        cout<< "Sum of the row "<< i << " = " << sum<< endl;  
        sum = 0; 
    } 
}  
void column_sum(int arr[m][n]) 
{ 
    int i,j,sum = 0; 
    cout << "\nFinding Sum of each column:\n\n"; 
    for (i = 0; i < 4; ++i) { 
        for (j = 0; j < 4; ++j) { 
            sum = sum + arr[j][i]; 
        }
        cout<<"Sum of the column "<<i<<" = "<<sum<< endl;  
        sum = 0; 
    } 
} 
int main() 
{ 
  
    int i,j; 
    int arr[m][n]; 
    int x = 1; 
    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            arr[i][j] = x++; 
    row_sum(arr); 
    column_sum(arr);
    return 0; 
} 

