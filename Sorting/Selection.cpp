#include<iostream>

using namespace std;


int main(){
     
     int arr[]={15,8,6,25,13,5,10};

     for (int i = 0; i < 7-1; i++)
     {
         //optimazation 
            int count=0;
         for (int j = i+1; j < 7; i++)
         {
             if (arr[i]<arr[j])
             {
                 count++;
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
             }
         }

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