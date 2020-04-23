#include<iostream>

using namespace std;

int main(){

    int arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int substart=0,subend=0;
    for(int i=0;i<5;i++){
            int sum=0;
            
        for(int j=0;j<5;j++){
            int start=i;
            int end=i+j;

            if(i+j >=5) break;

            sum+=arr[i+j];
            if(max<sum){
                max=sum;
                substart=start;
                subend=end;
            }
        }
       
    }

    cout<<"max  :"<<max<<endl;
    cout<<"subarray    " ;
    for(int i=substart;i<=subend;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}