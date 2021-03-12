#include<iostream>

using namespace std;

int dynamic_fibonacci(int n, int F[]){

   if(n <= 1){
       F[n] = n;
   return F[n];
   }

   F[n] = dynamic_fibonacci(n-2,F) + dynamic_fibonacci(n-1,F);

   return F[n];
}

int main(){

   int n;
   cin>>n;
   int F[n];
   cout<<dynamic_fibonacci(n-1,F);
   return 0;
}