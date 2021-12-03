#include<bits/stdc++.h>
using namespace std;
bool givensum(int a[],int n){
int pre_sum=0;
unordered_set<int> s;
for (int i = 0; i < n; i++)
{
   pre_sum+=a[i];
   if(s.find(pre_sum)!=s.end()){
       return true;
   }
   if(pre_sum==0){
       return true;
   }
   s.insert(pre_sum);
}
return false;
}
bool givensum1(int b[],int n,int sum){
int pre_sum1=0;
unordered_set<int> s;
for (int i = 0; i < n; i++)
{
  pre_sum1+=b[i];
  if(pre_sum1==sum){
      return true;
  }
  if(s.find(pre_sum1-sum)!=s.end()){
      return true;
  }
  s.insert(pre_sum1);
}
return false;
}
int main(){
    int a[]={1,4,13,-3,-10,5};
    int b[]={5,8,6,13,3,-1};
    cout<<givensum(a,6)<<endl;
    cout<<givensum1(b,6,22);
    return 0;
}