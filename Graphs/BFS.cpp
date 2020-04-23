#include<iostream>
#include<queue>
#include"graph.hpp"
using namespace std;

bool *  BFS(int v,graph g){
    if(!(v >= 0 && v < g.v)){
        cout<<"ERROR in vertex";
    return NULL ;
    } 
    bool *visted;
    queue <int> q;
    visted[v]=true;
    q.push(v);
    // cout<<" "<<v;

    while(!q.empty()){
        // visted[q.front()]=true;
        for(int p :g.g[q.front()]){
        // cout<<p;
            if(!visted[p]){
                q.push(p);
                visted[p]=true;
            }
        }
        cout<<" "<<q.front();
        q.pop();
    }
    
    return visted;
}

int main(){

    graph g(5);
    
    g.addEdge(3,1);
    g.addEdge(2,1);
    g.addEdge(4,2);
    g.addEdge(6,1);
    g.addEdge(3,1);
    g.addEdge(4,1);
    g.addEdge(1,0);
    g.addEdge(2,0);
    g.display(); 
    BFS(4,g);
    return 0;
}