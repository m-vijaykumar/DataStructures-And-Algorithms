#include<iostream>
#include<algorithm>

using namespace std;


int arr[1111][1111]={0};
int visted[1111]={0};
int knapsack(int n , int c ,int w[],int v[],int* vis){

        int result;
        
        // memoization
        if (arr[n][c] > 0)
        {
            vis[n]=1;
        return arr[n][c];
        }

        if (n==-1 || c==0)
        {     
        return 0;
        }else if (w[n]>c)
        {
        result = knapsack(n-1 , c , w ,v,vis);
        }else
        {
            
            int v1[sizeof(vis)+sizeof(int)], v2[sizeof(vis)+sizeof(int)];
            for(int i=0; i<=sizeof(vis); ++i)
            v1[i] = vis[i];
            for(int i=0; i<= sizeof(vis); ++i)
            v2[i] = vis[i];

            v2[n]=1;

            int temp1 = knapsack(n-1 , c , w ,v,v1);
            int temp2 = v[n] + knapsack(n-1, c-w[n] , w ,v,v2);
            
            result = max(temp1 , temp2); 

            if (temp2 > temp1){
                // cout<<"v2  ";
                for(int i=0; i<=sizeof(vis); ++i){
                    // cout<<v2[i]<<"  ";
                    vis[i]=v2[i];
                    visted[i] = v2[i];
                }

                cout<<endl;

            }else
            {
                // cout<<"v1   ";
            for(int i=0; i<=sizeof(vis); ++i){
                    // cout<<v1[i]<<"  ";
                    vis[i]=v1[i];
                    visted[i] = v1[i];
                }

                cout<<endl;
            }
            
                
        }
        //memoization
        arr[n][c]=result;

        return result;
    }
int main(){

    
    int n,capacity;
    cin>>n>>capacity;
    int vis[n]={0};
    int weight[n],value[n];
    cout<<"Enter Weight and Value Of Objects"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>weight[i]>>value[i];
    }   
 
    cout<<"maximum value    :  "<<knapsack( n-1 , capacity  ,  weight , value ,visted)<<endl;

    cout<<"Objects fit in Bag  :  ";
    for (int i = 0; i < n; i++)
    {
        if (visted[i] == 1)
        {
            cout<<i+1 <<"  ";
        }

    }
    cout<<endl;
    return 0;
}