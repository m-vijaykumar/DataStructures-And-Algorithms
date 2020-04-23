#include<iostream>

using namespace std;

/*

parent Loction (i-1)/2

Left Child  2*i+1
Rigth Child 2*i+2

*/

struct Heap
{
    int *heapArray;
    int heapSize;
    int count;
};

class minHeap
{
public:

    // minHeap(/* args */);

    void insert(Heap *h , int data){
// cout<<"enterd";
        if(h->count == h->heapSize){
            cout<<"overflow";
            return ;
        }

        int i=h->count;
        h->count++;

        while(i>0 && data <h->heapArray[(i-1)/2] ){
            cout<<"o  ";
            h->heapArray[i]= h->heapArray[(i-1)/2];
            i=(i-1)/2;
        }

        h->heapArray[i]=data;
        cout<<"inserted  "<<data<<endl;
    }

    int leftChild(Heap *h,int i){

        int left = i*2+1;
        if(left >= h->count) return -1;

        return left;
     
    }
    int rightChild(Heap *h,int i){

        int right = i*2+2;
        if(right >= h->count) return -1;

        return right;
    }
    void heapifydown(Heap *h,int i){
        // cout<<"entered  "<<h->count <<"  " ;

        int l,r,min,temp;

        l = leftChild(h,i);
        r = rightChild(h,i);
// cout<<"entered1";
// cout<<h->heapArray[i]<<"  "<<h->heapArray[l]<<"   "<<h->heapArray[r];
        if( r != -1 && l != -1){
// cout<<"entered2";
            if(h->heapArray[l]<h->heapArray[i] && h->heapArray[l]<h->heapArray[r]){
                min=l;
            }else if(h->heapArray[r]<h->heapArray[i]){
                min=r;
                // cout<<"entered5";
            }else return;

        }else if( l != -1 && h->heapArray[l]<h->heapArray[i]){
            min = l;
            // cout<<"entered4";
         }else return;

        //swap
        // cout<<"min"<<min<<endl;
        temp = h->heapArray[min];
        h->heapArray[min]=h->heapArray[i];
        h->heapArray[i]=temp;
        heapifydown(h,min);

    }


    int deletemin(Heap *h){

        if(h->count == 0){
            return -1;
        }
        int x= h->heapArray[0];

        h->heapArray[0]=h->heapArray[h->count-1];
        h->count--;
        heapifydown(h,0);
        return x;
    }

    void printHeap(Heap *h){

        for(int i=0;i< h->count;i++){
            cout<<h->heapArray[i]<<" ";
        }
    }


};



int main(){

    struct Heap *h = new Heap;
    h->count=0;
    h->heapSize =10;
    h->heapArray = new int[h->heapSize];

    minHeap *m = new minHeap();

    m->insert(h,50);
    m->insert(h,15);
    m->insert(h,20);
    m->insert(h,30);
    m->insert(h,10);
    m->insert(h,8);
    m->insert(h,16);
    m->insert(h,60);
    
    // m->insert(h,60);

    m->printHeap(h);
    cout<<endl;
    while(h->count !=0){
       cout<< m->deletemin(h)<<"  "; 
    }
    cout<<endl;
    cout<< m->deletemin(h)<<endl;
    // m->printHeap(h);
    return 0;
}