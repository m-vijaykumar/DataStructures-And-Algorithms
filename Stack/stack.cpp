#include<iostream>
#include<stack>
using namespace std;

void showstack(stack <int> g){

    // queue <int> g = qu; 
    while (!g.empty()) 
    { 
        cout<< g.top() <<"  " ; 
        g.pop(); 
    } 
    cout << '\n';
}

int main(){
    
    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.push(5);
    cout<<"top : "<<s.top()<<endl;
   showstack(s);
    cout<<"size of stack  "<<s.size();

}