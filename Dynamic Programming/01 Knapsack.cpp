#include<iostream>

using namespace std;

int arr[111][111]={0};
int knapsack(int n , int c ,int w[],int v[]){

    // cout<<endl<<n<<"      "<<c<<endl;
    int result;
    
    // memoization
    if (arr[n][c] > 0)
    {
        // cout<<"arr[n][c]    "<<n<<endl;
       return arr[n][c];
    }

    if (n==-1 || c==0)
    {
        // cout<<"end"<<endl;
       return 0;
    }else if (w[n]>c)
    {
        // cout<<"end1"<<endl;
       result = knapsack(n-1 , c , w ,v);
    }else
    {
        // cout<<endl<<"n "<<n<<endl;
        int temp1 = knapsack(n-1 , c , w ,v);
        // cout<<endl<<"nn "<<n<<endl;
        int temp2 = v[n] + knapsack(n-1, c-w[n] , w ,v);
        result = max(temp1 , temp2);
        // res[i++] = n;
        
        // cout<<endl<<"nnn "<<n<<endl;
    }
    // cout<<n<<endl;
    //memoization
    // cout<<endl<<n<<c<<endl;
    arr[n][c]=result;

    return result;
}

int main(){
    
    
    // cout<<max(3,4);
    int n,capacity;
    cin>>n>>capacity;
    arr[n][capacity];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < capacity; j++)
    //     {
    //         cout<<arr[i][j]<<endl;
    //     }
        
    // }
    
    int weight[n],value[n];
    cout<<"Enter Weight and Value Of Objects"<<endl;
    for (int i = 0; i < n; i++)
    {
        // cout<<"Object "<<i+1<<endl;
        cin>>weight[i]>>value[i];
    }
   
   
    cout<<"maximum value    :  "<<knapsack( n-1 , capacity  , weight , value );

    // cout<<endl<<res[0]<<"  "<<res[1]<<"  "<<res[2]<<"  "<<res[3]<<"  "<<res[4]<<"  ";
    return 0;
}