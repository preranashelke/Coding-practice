#include<bits/stdc++.h>
using namespace std;

void divisors(int n){  //naive solution  n 
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

void divisors1(int n){   //optimized solution n^1/2
    int i;
    for( i=1;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for (; i >=1; i--)
    {
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    divisors1(n);
   cout<<endl;
    return 0;
}