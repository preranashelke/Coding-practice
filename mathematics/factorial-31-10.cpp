#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    int res=n*factorial(n-1);
    return res;
}
int main(){
    int n;
    cout<<"enter any number to calculate factorial of number"<<endl;
    cin>>n;
    int p=factorial(n);
    cout<<"factorial :"<<p<<endl;
    return 0;
}