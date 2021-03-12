#include<iostream>

using namespace std;

int* mergeSort(int arr[], int *temp,int low, int high){

    if (high>low)
    {
        int mid = (low+high)/2;
        mergeSort(arr,temp,low,mid);
        mergeSort(arr,temp,mid+1,high);

        int left = low;
        int left_end = mid;
        int right = mid+1;
        int right_end = high;
        int pos = low;

        while(left <=  left_end && right <= right_end){

            if(arr[left] <= arr[right]){
                temp[pos] = arr[left];
                left++;
                pos++;
            }else{
                temp[pos] = arr[right];
                pos++;
                right++;
            }
        }
        while (left <= left_end)
        {
            temp[pos] = arr[left];
            pos++;
            left++;
        }
        while (right <= right_end)
        {
            temp[pos] = arr[right];
            pos++;
            right++;
        }
        

        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i];
        }
            return arr;
    
    }    
    return NULL;
}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int *temp = mergeSort(arr,temp,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
