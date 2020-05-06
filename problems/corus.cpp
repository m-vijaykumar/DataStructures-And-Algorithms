#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	while(n){
	    
	    int x,q;
	    cin>>x>>q;
	    
	    char s[x];
	    int s1[26]={0};

        cin>>s;

	    for(int i=0;i<x;i++){
	        s1[s[i]-'a']++;
	    }
	    
	    int arr[q];

	    for(int i=0;i<q;i++){
	        // cin>>arr[q];
            int qs;
	        cin>>qs;
	        int count=0;
	        
	        for(int i=0;i<26;i++){
	            
	            if(s1[i]>qs){
                    count+= s1[i]-qs;
                }
	        }
	        
	        cout<<count<<endl;
	    }
	    
	    n--;
	}
	return 0;
}
