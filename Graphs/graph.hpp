#include<iostream>
#include<vector>

using namespace std;


class graph
{
private:
    /* data */
public:
    vector <int> g[50];
    int v;
    graph(int x){
        v=x;
        g[x];
    }
    void addEdge(int u,int v){


        if(u < this->v && v < this->v){

           for(auto x: g[v]){
             
                if(x == u){

                    cout<<"yes";
                    return ;
                }
            }
            cout<<this->v;
            g[u].push_back(v);
            g[v].push_back(u);
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
                cout << "-> " << x; 
                printf("\n"); 
            } 

         
    }

};


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