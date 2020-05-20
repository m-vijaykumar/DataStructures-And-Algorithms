#include<iostream>

using namespace std;

int main(){

    int x;
    cin>>x;

    while (x)
    {

        int n,m;

        cin>>n,m;

        int arr[n];
        int xy[n][n];
        for (int i = 0; i < n; i++)
        {
           cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int a,b;
            cin>>a>>b;
            xy[--a][--b]=1;
        }
        

        x--;
    }
    
    return 0;
}
