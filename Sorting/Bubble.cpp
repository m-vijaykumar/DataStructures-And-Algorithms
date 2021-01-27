#include<iostream>

using namespace std;


int main(){
     
     int arr[7]={15,8,6,25,13,5,10};
int count=0;
     for (int i = 0; i < 7; i++)
     {
        //  cout<<"1";
         //optimazation 
            count=0;
         for (int j = 0; j < 7-i-1; j++)
         {
             
             if (arr[j] > arr[j+1])
             {             
                 count++;
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
             }
         }
        // cout<<count<<"ew";
         if (count == 0)
         {
             break;
         }
         
         
     }

     for (int i = 0; i < 7; i++)
     {
         cout<<arr[i]<<"  ";
     }
     
     
    return 0;
}