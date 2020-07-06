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
            
        for(int j=0;j<5;j++){
            int sum=0;
            int start=j;
            int end=i+j;
            for(int k=j;k<=(i+j);k++){
            if(i+j >=5) break;

            sum+=arr[k];
            }
            
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