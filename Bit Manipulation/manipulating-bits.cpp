#include<iostream>

using namespace std;


int GetBit(int x,int total =0,int index=0){

    if (total == x)
    {
        return 0;
    }
    
    int p=((x & (1<<index))!=0);
    // cout<<(x & (1<<index));
    total +=(x & (1<<index));

    GetBit(x ,total,++index);
    // cout<<(x & (1<<index));
    cout<<p<<" ";
}

int main()
{
    GetBit(45);
    return 0;
}
