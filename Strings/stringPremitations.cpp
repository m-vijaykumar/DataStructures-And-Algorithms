#include<iostream>

using namespace std;

string swap(string s,int x,int y){
    char temp ;
    temp=s[x];
    s[x]=s[y];
    s[y]=temp;
    return s;
}

void permutation(string s,int l=0){

    if(l==s.length()-1){
        cout<<s<<endl;
    }
    else{
        for(int i=l;i<s.length();i++){

            s= swap(s,l,i);
            permutation(s,l+1);
        }
    }
}


int main(){

    string s;
    cout<<"enter string : ";
    cin>>s;

    permutation(s);

    return 0;

}