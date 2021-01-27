#include<iostream>
#include<map>
using namespace std;


int gridtravelsal(int x,int y, map<string,int> memo ){
    
    // if(x == 1 && y==1) return 1;
    string key = to_string(x)+','+to_string(y);

    auto search = memo.find(key);
    if (search != memo.end())
    {
        return memo[key];
    }
    
    if(x == 1 && y==1) return 1;
    if(x == 0|| y == 0) return 0;
    memo.insert(pair<string,int>(key, gridtravelsal(x-1 , y,memo) + gridtravelsal(x,y-1,memo)));

    return memo[key];
}

int main(){
     
map<string,int> memo;
    cout<<gridtravelsal(18,18,memo); 
    return 0;
}