#include<iostream>

using namespace std;
int minSwaps(int arr,int x,int y,int n,int m,int l=0){

    for (int i = l; i < m; i++)
    {
        arr = swap(arr,x[i],y[i]);
        minSwaps()
    }
   
}
int main(){

    int x;
    cin>>x;

    while (x)
    {

        int n,m;

        cin>>n,m;

        int arr[n];
        int x[m],y[m];
        for (int i = 0; i < n; i++)
        {
           cin>>arr[i];
        }

        for (int i = 0; i < m; i++)
        {
            
            cin>>x[i]>>y[i];
            
        }
        
        minSwaps(arr,x,y,n,m);
        x--;
    }
    
    return 0;
}
