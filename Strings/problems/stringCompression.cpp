#include<iostream>
#include<sstream>
using namespace std;

//find the length of max compressed string 

// and then compress the string 
//if  compressed string is greater then length of max compressed string 
//thrn  print  original string and return

int main(){

    string s;
    string s1="";
    
    cin>>s;
    int x=1;
    char p=s[0];
    for(int i=1;i<=s.length();i++){
        if(s[i]!=p){
            s1+=p; 
            stringstream ss;   
            ss << x;
            s1+=ss.str();
            p=s[i];
            x=1;

            // if(s1.length()+s.length()-i > s.length()) {
            //     cout <<s;
            //     return 0;
            // }
        }else{
            x++;
        }

    }

    if(s1.length()<s.length()){
        cout<<s1<<endl;
    }else cout<<s<<endl;

    // cout<<s1;
    
    return 0;
}