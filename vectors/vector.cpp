#include<iostream>
#include<vector>
#include<map>
#include<iterator>

using namespace std;
vector<int> v;  
int main(){

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int x : v){
        cout<<x<<"  ";
    }
    map<char ,int > d;

    d.insert(pair<char,int>('a',0));
    d.insert(pair<char,int>('b',1));
    map<char , int>::iterator ptr;
     for ( ptr = d.begin(); ptr != d.end(); ptr++){
         if(ptr->first == 'b'){
             ptr->second = 500;
         }
            cout<< ptr->first << " "<<ptr->second<<endl;
     } 

        
    return 0;
}