#include<iostream>

using namespace std;

int partition(int arr[], int left, int right){

    int pivot = arr[left];
        int pivot_pos = left;
        
        while (left < right)
        {
            while (arr[left] <= pivot)
            {
                left++;
            }
            
            while(arr[right] > pivot){
                right--;
            }
            
            if (left < right)
            {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        }

        arr[pivot_pos] = arr[right];
        arr[right] = pivot;

        return right;

}

void quick(int arr[],int low, int high){
        
    if(high > low ){

        int pivot = partition(arr,low,high);
        quick(arr,low,pivot-1);
        
        quick(arr,pivot+1, high);
    }
    
}

int main(){
 
    int arr[5]={23,45,2,56,16};
    quick(arr,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
