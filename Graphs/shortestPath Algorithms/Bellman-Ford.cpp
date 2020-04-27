
#include<iostream>
#include<vector>
#include<queue>
#include<limits.h>
#include"../weightedGraph.hpp"

using namespace std;

class Bellman_Ford
{
private:
    /* data */
public:

    Bellman_Ford(weightedGraph g,int s,int x){

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

   Bellman_Ford(g,0,4);  //dijkstra( Graph , startingVertex ,endingVertex )

    return 0;
}
