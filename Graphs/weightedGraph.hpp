#include<iostream>
#include<vector>
#include<map>
#include"graph.hpp"
using namespace std;


class weightedGraph
{
private:
    /* data */
public:
    vector < pair<int,int> > g[50];
    int v;
    weightedGraph(int x){
        v=x;
        g[x];
    }
    void addEdge(int u,int v,int w){


        if(u < this->v && v < this->v){

         
           for(auto x: g[u]){
            //  cout<<"yes"<<x.first<<"  "<<v;
                if(x.first == v){

                    cout<<"yes"<<x.first<<"  "<<v;
                    return ;
                }
            }
            cout<<this->v;
            g[u].push_back(make_pair(v,w));
            // g[v].push_back(u);
        }else
        {
            cout<<"invallid vertex";
        }
        
    }

    void display(){
        for (int v = 0; v < this->v; ++v) 
            { 
                cout << "\n Adjacency list of vertex "
                    << v << "\n head "; 
                for (auto x : g[v]) 
                cout << "-> (" << x.first<<","<<x.second<<") "; 
                printf("\n"); 
            } 

         
    }

};


// int main(){

//     weightedGraph g(5);
//     g.addEdge(3,1,4);
//     g.addEdge(3,1,4);
//     g.addEdge(3,1,4);
//     g.addEdge(1,3,4);

    
//     g.display(); 
//     return 0;
// }

// int main(){

//     graph g(5);
//     g.addEdge(3,1);
//     g.addEdge(3,1);
//     g.addEdge(3,1);
//     g.addEdge(3,1);
//     g.addEdge(3,1);
//     g.display(); 
//     return 0;
// }