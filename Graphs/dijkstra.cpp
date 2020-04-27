
#include<iostream>
#include<vector>
#include<queue>
#include"weightedGraph.hpp"

using namespace std;

int dijkstra(weightedGraph g,int s){

    if(!(s >= 0 && s < g.v)){
        cout<<"ERROR in vertex";
    return NULL ;
    } 
    bool *visted;

    queue <int> q;
    visted[s]=true;
    q.push(s);
    // cout<<" "<<v;

    while(!q.empty()){
        // visted[q.front()]=true;
        for(auto p :g.g[q.front()]){
        // cout<<p;
            if(!visted[p.first]){
                q.push(p.first);
                visted[p.first]=true;
            }
        }
        cout<<" "<<q.front();
        q.pop();
    }
    
}

int main(){

    weightedGraph g(5);
    g.addEdge(3,1,4);
    g.addEdge(3,2,4);
    g.addEdge(2,1,4);
    g.addEdge(1,0,4);
    g.addEdge(2,0,4);
    g.addEdge(1,3,4);

    
    g.display(); 

    dijkstra(g,3);
   
    
    return 0;
}