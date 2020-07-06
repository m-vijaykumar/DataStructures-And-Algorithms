#include<iostream>


int max(int x ,int y){

    return (x >= y ?  x :y );
}

int maxSubArraySum(int arr[],int n){

    int maxSum,currentSum;
    maxSum = currentSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        currentSum = max(arr[i] , currentSum+arr[i]);

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        
    }

    return maxSum;
    
}

using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"maximum SubArray : "<<maxSubArraySum(arr,n);

}