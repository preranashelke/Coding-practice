#include<bits/stdc++.h>  
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
typedef long long int ll;

using namespace std;
#define MOD 1000000007
bool isValid(char c){
    return (c == 'M' || c == 'A' || c == 'C' || c == 'B' || c == 'O' ||
     c == 'K' || c == 'm' || c == 'a' || c == 'c' || c == 'b' || c == 'o'  || c == 'k');
}
long long int subString(string s, int n)
{

    ll count=0;
    for(ll j=0;j<n;j++){
        if(isValid(s[j])){
           count=((count % MOD)+(n % MOD -j % MOD) % MOD) % MOD;
        }
    }
       
return count%1000000007;
}
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       string res;
       cin>>res;
       cout<<subString(res,n)<<endl;
      
   }
    return 0;
}