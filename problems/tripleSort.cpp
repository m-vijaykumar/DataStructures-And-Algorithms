#include<iostream>
#include<algorithm>
#include<map>
#include<iterator>
using namespace std;

map<int,int> updateMap(int *arr,int *arr1,int n){
    map<int,int> p;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        
        if(arr[i] == arr1[i]) continue;
        int j;
        for ( j= 0; j < n; j++)
        {
            if(arr1[i]==arr[j]){
                break;
                count++;
            }
        }       
        p.insert(pair<int,int>(arr1[i],j));
        if(count==3) return p;
    }

    return p;
}

int main(){

    int x;
    cin>>x;

    while(x){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int arr1[n];
    int count=0,v[3],index[3];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    
    sort(arr1,arr1+n);

    map<int,int> a;
    int p=0;
    while (k)
    {
        map<int, int>::iterator itr; 
        a=updateMap(arr,arr1,n);
        // for (itr = a.begin();itr != a.end();++itr)
        // {
        //     cout<<itr->first<<"  "<<itr->second<<endl;
        // }
        p++;
    int count=0;

    for (itr = a.begin();itr != a.end();++itr)
    {
        if(count == 3) break;
        index[count]=itr->second;
        v[count++]=itr->first;    
    }
    

        if(count ==0 ){
            break;
        }
        else if(count <3)
        {
            cout<<-1;
            break;
        }


            // for (int i = 0; i < 3; i++)
            // {
            //     cout<<v[i];
            // }
           
                // cout<<arr[index[0]]<<"  "<<arr1[index[0]];
            
                arr[index[0]]=v[2];
                arr[index[1]]=v[0];
                arr[index[2]]=v[1];
                cout<<p<<endl;
                cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
            
            // if(arr1[index[0]]== arr[index[0]] ){
            //     a.erase(v[0]);
            //     a.erase(v[1]);
            //     a.erase(v[2]);
            // }else{
            //     a=updateMap(arr,arr1,n);
            // }

        k--;
        // cout<<"K  "<<k<<endl;
    }
    x--;
    }
    return 0;
}