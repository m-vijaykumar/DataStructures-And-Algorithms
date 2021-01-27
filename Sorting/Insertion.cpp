#include<iostream>

using namespace std;


int main(){
     int arr[]={15,8,6,25,13,5,10};

    int i,j,key;
     for (int i = 1; i < 7; i++)
     {        
         key=arr[i];
         j=i;

         while ( j >=1)
         {
             if (arr[j-1] < key )
             {
                 arr[j] =arr[j-1];
             }else
             {
                 
                 break;
             }
             
             j--;
             
         }
         arr[j] = key;
     }

     for (int i = 0; i < 7; i++)
     {
         cout<<arr[i]<<"  ";
     }
    return 0;
}