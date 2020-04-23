#include<iostream>

using namespace std;

/*

parent Loction (i-1)/2

Left Child  2*i+1
Rigth Child 2*i+2

*/



class Heap
{
    private:
    
public:
    int *heapArray;
    int heapSize;
    int count;

    Heap(int capacity ){
    count=0;
    heapSize =capacity;
    heapArray = new int[heapSize];
    }

    void insert( int data){
// cout<<"enterd";
        if(count == heapSize){
            cout<<"overflow";
            return ;
        }

        int i=count;
        count++;

        while(i>0 && data >heapArray[(i-1)/2] ){
            // cout<<"o  ";
            heapArray[i]= heapArray[(i-1)/2];
            i=(i-1)/2;
        }

        heapArray[i]=data;
        // cout<<"inserted  "<<data<<endl;
    }

    int leftChild(int i){

        int left = i*2+1;
        if(left >= count) return -1;

        return left;
     
    }
    int rightChild(int i){

        int right = i*2+2;
        if(right >= count) return -1;

        return right;
    }
    void heapifydown(int i){
        // cout<<"entered  "<<count <<"  " ;

        int l,r,max,temp;

        l = leftChild(i);
        r = rightChild(i);
// cout<<"entered1";
// cout<<heapArray[i]<<"  "<<heapArray[l]<<"   "<<heapArray[r];
        if( r != -1 && l != -1){
// cout<<"entered2";
            if(heapArray[l]>heapArray[i] && heapArray[l]>heapArray[r]){
                max=l;
            }else if(heapArray[r]>heapArray[i]){
                max=r;
                // cout<<"entered5";
            }else return;

        }else if( l != -1 && heapArray[l]>heapArray[i]){
            max = l;
            // cout<<"entered4";
         }else return;

        //swap
        // cout<<"max"<<max<<endl;
        temp = heapArray[max];
        heapArray[max]=heapArray[i];
        heapArray[i]=temp;
        heapifydown(max);

    }


    int deleteMax(){

        if(count == 0){
            return -1;
        }
        int x= heapArray[0];

        heapArray[0]=heapArray[count-1];
        count--;
        heapifydown(0);
        return x;
    }

    void printHeap(){

        for(int i=0;i< count;i++){
            cout<<heapArray[i]<<" ";
        }
    }


};



// int main(){


//     Heap *m = new Heap(9);

//     m->insert(50);
//     m->insert(15);
//     m->insert(20);
//     m->insert(30);
//     m->insert(10);
//     m->insert(8);
//     m->insert(16);
//     m->insert(60);
    
//     // m->insert(60);

//     m->printHeap();
//     cout<<endl;
//     while(m->count !=0){
//        cout<< m->deleteMax()<<"  "; 
//     }
//     cout<<endl;
//     cout<< m->deleteMax()<<endl;
//     // m->printHeap(h);
//     return 0;
// }