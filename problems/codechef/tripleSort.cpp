#include<iostream>
using namespace std;


int main(){

    int x;
    cin>>x;

    while(x){
        
    int n,k;
    cin>>n>>k;
    long int arr[n];
    long int arr1[n];
    int count=0,v[3],index[3];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    int cpp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr1[i]>arr1[j]){
                cpp++;
                int t=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=t;
            }
        }
    }
    
    int p=0;
    while (k)
    {

        int count=0;
        p++;
        
        for (int i = 0; i < n; i++)
        {
        
            if(arr[i] == arr1[i]) continue;
            int j;
            for ( j= 0; j < n; j++)
            {
                if(arr1[i]==arr[j]){
                    break;
                   
                }
            }    
               
            v[count]=arr1[i];
            index[count++]=j;
            
            if(count==3) break;
        }
    

        if(count ==0 ){
            break;
        }
        else if(count <3)
        {
            cout<<-1;
            break;
        }
            
                arr[index[0]]=v[2];
                arr[index[1]]=v[0];
                arr[index[2]]=v[1];
                cout<<p<<endl;
                cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

        k--;
    }
    for (int i = 0; i < n-1; i++)
    {

        if(arr[i]>arr[i+1]) {
            cout<<-1<<endl;
            break;
        }
    }
    
    x--;
    }
    return 0;
}
