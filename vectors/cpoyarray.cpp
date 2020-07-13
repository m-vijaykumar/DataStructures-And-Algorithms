#include<iostream>
#include<algorithm>

using namespace std;
int main()
{

    int a[10]={1,2,3,4,5};
    int b[10];
    copy(begin(a), end(a), begin(b));

    for (auto e : b)
    {
        cout<<e<<"\n";
    }
    
    return 0;
}
