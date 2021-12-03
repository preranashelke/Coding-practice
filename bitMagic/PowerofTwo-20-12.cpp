#include<bits/stdc++.h>
using namespace std;

bool power2(int n){
if(n==0){
    return false;
}
return ((n&(n-1))==0);
}
int main(){
int n=16;
int p=23;
cout<<power2(p)<<endl;
    return 0;
}