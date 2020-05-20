#include<iostream>

using namespace std;

int main(){
    int n=4;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }
    cout<<endl<<"rotaion"<<endl;
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}

