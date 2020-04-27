
#include<iostream>
#include<vector>
#include<queue>
#include<limits.h>
#include"../weightedGraph.hpp"

using namespace std;

class dijkstra
{
private:
    /* data */
    int prevertex[INT16_MAX];
public:
    int distance[INT16_MAX];
  
    
    int startVertex ;

    dijkstra(weightedGraph g,int s,int x){

    if(!(s >= 0 && s < g.v)){
        cout<<"ERROR in vertex";
    return ;
    } 
    startVertex =s;
    distance[g.v];
    prevertex[g.v];
    for (int i = 0; i < g.v; i++)
    {
       distance[i]= -1;
    }
    distance[s]=0;
    for (int i = 0; i < g.v; i++)
    {
       prevertex[i]=-1;
    }
    
    cout<<endl;
    queue <int> q;
    q.push(s);
    while(!q.empty()){
        for(auto p :g.g[q.front()]){
        // cout<<"first"<<p.first;
        if(distance[p.first] != -1){
            if(distance[q.front()]+p.second < distance[p.first]){
                distance[p.first] = distance[q.front()]+p.second;
                prevertex[p.first]=q.front();
            }
        }else
        {
            distance[p.first] = distance[q.front()]+p.second;
            prevertex[p.first]=q.front();
        }
            q.push(p.first);
        }

        // cout<<" "<<q.front()<<endl;

    // for(int i=0;i<g.v;i++){
    //     cout<<distance[i]<<" ";
    // }
    // cout<<endl;
        
        q.pop();
    }
    // cout<<"end";
    getShortestPath(g,s,x);
}


void getShortestPath(weightedGraph g ,int x,int y){

    if(!(x >= 0 && x < g.v)) {
        cout<<"invaild vertex";
        return ;
    }
    if(!(y >= 0 && y < g.v)) {
        cout<<"invaild vertex";
        return ;
    }
    if(distance[y]==-1){
        cout<<"no path from "<<x<<" to "<<y;
        return ;
    } 
    if(x==y) {
        cout<<" "<<x;
        return;
    }
    getShortestPath(g,x,prevertex[y]);
    cout<<" -> "<<y;
    

    
}

};





int main(){

    weightedGraph g(5);
    
    g.addEdge(0,1,4);
    g.addEdge(0,2,1);
    g.addEdge(2,1,2);
    g.addEdge(2,3,4);
    g.addEdge(1,4,4);
    g.addEdge(3,4,4);
    g.display(); 

   dijkstra(g,0,4);  //dijkstra( Graph , startingVertex ,endingVertex )

    return 0;
}