#include<bits/stdc++.h>
using namespace std;
int prime1(int n){
    if(n==1) return 0;  //check for 1
    if(n==2||n==3) return 1; //check for 2 and 3
    if(n%2==0||n%3==0) return 0;   //if divisible thry are not prime

    for(int i=5;i*i<=n;i=i+6){   //incresing direct by 6 
        if((n%i==0)||(n%(i+2)==0))    //faster as 3 times
        return 0;
    }
    return 1;
}
int main(){

    int n;
    cout<<"enter any number:";
    cin>>n;
   int a=prime1(n);
   if(a==1){
       cout<<"true"<<endl;
   }else{
       cout<<"false";
   }
    cout<<endl;
  
    return 0;
}