#include<iostream>
#include<queue>
using namespace std;

void showqueue(queue <int> g){

    // queue <int> g = qu; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.front(); 
        g.pop(); 
    } 
    cout << '\n';
}
int main(){

    queue <int> q;
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.size()<<endl;
    showqueue(q);
    cout<<q.front()<<endl;
    return 0;
}