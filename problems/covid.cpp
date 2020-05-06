#include <iostream>
using namespace std;



// void set maxmin(int arr[],int x,int n){
    
//     for(int i=x;i<n;i++){
        
//         setminmax(arr,i,n);
//     }
// }

int main() {
	
	int x;
	cin>>x;

	while(x)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int max=0,min=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int a=0;
	    for(int i=1;i<n;i++){
	        a++;
            // cout<<"a"<<a<<endl;
            // cout<<"arr[i]-arr[i-1]  "<<arr[i]-arr[i-1]<<endl;
	        if(arr[i]-arr[i-1] >2){
                // cout<<"(max==0 && min==0)"<<(max==0 && min==0)<<endl;
                if(max==0 || min==0){
                    min=a;
                    max=a;
                }else{
                if(max<a) max=a;
	            if(min>a) min=a;
                }
	            
	            
	            a=0;
	        }
            
	    }
        a++;
        if(max==0 && min==0){
                    min=a;
                    max=a;
                }else{
                if(max<a) max=a;
	            if(min>a) min=a;
                }
	   
	    cout<<min<<" "<<max<<endl;
	    x--;
	    
	}
	

	return 0;
}
