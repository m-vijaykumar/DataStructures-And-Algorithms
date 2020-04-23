#include<iostream>
#include"basicHeap.hpp"

using namespace std;

class heapSort
{
private:
    /* data */
public:
    
    int * sort(int n, int arr[]){

    Heap *m = new Heap(9);

    for(int i=0;i<n;i++){
        m->insert(arr[i]);
    }
    int k=0;
    while(m->count !=0){
        arr[n-1-k]=m->deleteMax();
        k++;
    }
        return arr;
    }
    
};

int main(){

    int n;
    cout<<"size  :  ";
    cin>>n;
    int arr1[n];

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    heapSort hs ;

    int *arr = hs.sort(n,arr1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}