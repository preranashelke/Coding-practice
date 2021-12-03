
#include<bits/stdc++.h>
using namespace std;

//Given a non-negative integer num, repeatedly add all its digits until the result has only one digit
 int digitalroot(int n){
if(n==0){
   return 0;
}
return  (n%9==0)? 9:(n%9);
}
int main(){
int n ;
cout<<"enter any number"<<endl;
cin>>n;
cout<<digitalroot(n)<<endl;
    return 0;
}