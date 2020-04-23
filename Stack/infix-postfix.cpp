#include<iostream>
#include<stack>
using namespace std;

void showstack(stack <char> g){

    // queue <int> g = qu; 
    while (!g.empty()) 
    { 
        cout<< g.top() <<" " ; 
        g.pop(); 
    } 
    cout <<"    ";
}
int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
}

int main(){
    
    stack <char> s;
    // char opr =['+,-,*,/,%'];
    int operandCheck =0;
    string str;
    string post="";
    cin>>str;
    cout<<"ch \t"<<"stack\t\t"<<"post\n";
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<"\t";
        if(str[i]=='('){
            operandCheck =0;
            s.push(str[i]);
        }else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='%'||str[i]=='^'){
            operandCheck =0;
            while(!s.empty() && s.top() != '(' && prec(str[i])<=prec(s.top()) ){
                post+=s.top();
                s.pop();
            }
            s.push(str[i]);
        }else if (str[i]==')')
        {
            operandCheck =0;
            if(s.empty()){
                cout<<"invaid input";
                return 0;
            }else{
                while (s.top()!='('){ 
                post=post+s.top();
                s.pop();
                }
                s.pop();
            }
           
        }else{
            operandCheck++;
            if(operandCheck >1){
                cout<<"invaid input";
                return 0;
            }
            post=post+str[i];
        }
        showstack(s);
        cout<<post<<endl;
    }
    while (!s.empty()) 
    { 
        if(s.top()=='('){
            cout<<"invalid input";
            return 0;
        }
        post=post+s.top(); 
        s.pop(); 
    }
    cout<<"post : "<<post;

}