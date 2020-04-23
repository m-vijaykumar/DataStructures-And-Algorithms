#include<iostream>
#include<vector>
#include"graph.hpp"
using namespace std;


bool *  DFSin(int v,bool visted[] ,graph g){
    if(!(v >= 0 && v < g.v)){
        cout<<"ERROR in vertex";
    return NULL ;
    } 
    
    
    visted[v]=true;
    cout<<" v"<<v;
    for(int p :g.g[v]){
        // cout<<" "<<p<<endl;
        if(!visted[p]){
            
          visted =   DFSin(p,visted,g);
        }
    }
    return visted;
}

void DFS(int v ,graph g){
    bool visted[g.v]={false};
    DFSin(v,visted,g);
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
    DFS(4,g);
    return 0;
}