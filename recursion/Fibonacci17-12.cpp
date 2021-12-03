#include<bits/stdc++.h>
using namespace std;
int Fibonacci(int n){
if(n==0){
    return 0;
}
if(n==1){
    return 1;
}


return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
int n;
cout<<"enter the number to find Fibonacci  of it"<<endl;
cin>>n;
int p=Fibonacci(n);
cout<<p<<endl;
    return 0;
}