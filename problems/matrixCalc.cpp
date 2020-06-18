#include<iostream>

using namespace std;

void print(int m, int n, int arr[][n]) 
{ 
    int i, j; 
    for (i = 0; i < m; i++) 
      for (j = 0; j < n; j++) 
        printf("%d ", arr[i][j]); 
} 


void calc(int size, int arr[][]){

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin>>arr[i][j];
        }
        
    }
}

int main(){

    int size;
    cout<<"Enter size of matrix :";
    cin>>size;
    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    calc( size , arr);
    

    return 0;
}