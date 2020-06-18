#include<iostream>

using namespace std;

bool check(char *memo ,int n,int y){

    int total=1;
    // cout<<endl;
    for(int i =0 ;i<n;i++){
        // cout<<memo[i]<<"  ";
    }
    // cout<<endl;
      
    for(int i =0 ;i<n;i++){
        if (memo[i]  == '+')
        {
            total += i+2 ; 
        }else
        {
            total -= i+2 ;
        }
        
        
    }
    // cout<<total;

    if (total == y )
    {
        return true;
    }

    return false;
    
}

void find(int n , int m ,char *memo ,int y){

    if(n >= m ) return ;

    if(memo[m]== 't'){
        // cout<<memo[m];
        return ;
    } 
    
    if(n == m-1){
        if(check(memo , m,y)){
            memo[m] = 't';
        }else
        {
            memo[m] = 'f';
        }
        
    }

    if(memo[m]== 'f'){

        memo[n]= '+';
        // cout<<memo[n]<<endl;
        find(n+1,m,memo,y);
    }
    if(memo[m]== 'f'){

        memo[n]= '-';
        find(n+1,m,memo,y);
    }

    return ;
}

int main(){

    int n,x;
    cin>>n>>x;
std::ios_base::sync_with_stdio(false);
    char  memo[n+1];

    memo[n-1]='f';
    // cout<<memo[n];
    find(0 , n-1 , memo , x);
    // cout<<endl;
    if(memo[n-1] == 'f'){
        cout<<"Impossible";
    }else{
        for (int i = 0; i < n-1; i++)
        {
            cout<<i+1<<memo[i];
        }
        cout<<n;
    }
    return 0; 
}