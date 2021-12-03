#include<bits/stdc++.h>
using namespace std;
int digit(int n){
    if(n==0)
    return 0;
    return 1+digit(n/10);
}
int digit2(int n){
    return floor(log10(n)+1);
}
int main(){
  int n;
  cout<<"enter thr number to calculate digit:";
  cin>>n;
 int p= digit(n);
 cout<<p<<endl;
 int q=digit2(n);
 cout<<q<<endl;
    return 0;
}