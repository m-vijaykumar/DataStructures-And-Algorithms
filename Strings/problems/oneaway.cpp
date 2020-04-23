#include<iostream>

using namespace std;

int main(){

    int check1[128]={0};
    int check2[128]={0};
    
    string s1,s2;

    cin>>s1>>s2;

    long c =s1.length()-s2.length();
     abs(c);
    if(c>=2){
        cout<<"false";
        return 0;
    }
    for (char i : s1)
    {
        int s=i;
        check1[s]=check1[s]+1;
    }

    for (char i : s2)
    {
        int s=i;

        check2[s]=check2[s]+1;
    }
int a=0;
    for (int i=0;i<128;i++)
    {
        
        if(check1[i]!=check2[i]){
            a++;
        }
    }
    
if(a==1){
    cout<<"true";
}else{
   cout<<"false"; 
}

    return 0;
}