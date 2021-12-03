#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first numbers:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    int gcd=0;
    
    int k;
    int m;
    if(a>b){
        k=a;
        m=b;
    }else{
k=b;
m=a;
    }
    while(k%m!=0){
      int r=k%m;
      k=m;
      m=r;
    }
    gcd=m;
    cout<<gcd<<endl;
    return 0;
}