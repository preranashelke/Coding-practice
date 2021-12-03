#include<bits/stdc++.h>
using namespace std;
// long long int trailing(int n){  //may take long time and overflow
//     if(n==1||n==0){
//         return 1;
//     }
    
//    long long int res=n*trailing(n-1);
 
//     return res;
// }
int main(){
    int n;
    cout<<"enteer the number :"<<endl;
    cin>>n;
int count=0;
    for (int i = 5; i <= n; i=i*5) //time complexity is logn
    {                              //i^k<=n
       count=count+n/5;           // k=logn
    }
    cout<<count<<endl;
    
//    long long int p=trailing(n);
//     cout<<p<<endl;
//     int count=0;
//     while(p%10==0){
//         count++;
//         p/10;
//     }
//     cout<<count<<" trailing"<<endl;
//     return 0;
}