#include<bits/stdc++.h>
using namespace std;
int givensum(int a[],int n,int sum){
 int res=0;
unordered_map<int ,int> m;
 int pre_sum=0;
 for (int i = 0; i < n; i++)
 {
     pre_sum+=a[i];
     if(pre_sum==sum){
         res= i+1;
     }
     if(m.find(pre_sum)==m.end()){
         m.insert({pre_sum,i});
     }
     if(m.find(pre_sum-sum)!=m.end()){
         res=max(res,i-m[pre_sum-sum]);
     }
 }
 
    return res;
}
int main(){
    int a[]={8,3,1,5,-6,6,2,2};
    cout<<givensum(a,8,4);
    return 0;
}
