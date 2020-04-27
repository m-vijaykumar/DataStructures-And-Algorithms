#include<iostream>
#include<queue>
#include"graph.hpp"
using namespace std;

bool *  findPath(int v,int e, graph g){
    if(!(v >= 0 && v < g.v)){
        cout<<"ERROR in vertex";
    return NULL ;
    } 
    bool *visted;
    int flag=0;
    int arr[v];
    int x=0;
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

        
        arr[x]=q.front();
        // cout<<arr[x];
        x++;
        // cout<<" "<<arr[x-1];
        if(q.front()==e) {
            flag=1 ;
            break;
        }
        q.pop();
    }
    
    if(flag ==1){
        for(int i=0;i<x;i++){
            cout<<" "<<arr[i];
        }
    }else{
        cout<<"no path form "<<v<<" to "<<e;
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
    findPath(4,0,g);//  ( stating Node  ,ending Node , graph )
    return 0;
}