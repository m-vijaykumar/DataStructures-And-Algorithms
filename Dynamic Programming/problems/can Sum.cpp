#include<bits/stdc++.h>

using namespace std;

bool canSum(int sum,int arr[]){

    if(sum == 0) return true;
    if(sum < 0 ) return false;
    for (int i = 0; i < size(arr) ; i++)
    {
        int rem = sum - arr[i];
        // cout<<"ereaw";
        if(canSum(rem , arr) == true) return true;
    }
    return false;
}

int main(){
     
    int x[]={2,3,4,5,3};
    cout<<canSum(7, x);
    return 0;
}