#include<iostream>

using namespace std;

int main(){

    int a[4][5] ={
        {1,2,3,4,5},
        {11,22,33,44,55},
        {111,222,333,444,555},
        {1111,2222,3333,4444,5555},
        };

        printf("%d\n",*(*(a+**a+2)+3));

    return 0;
}