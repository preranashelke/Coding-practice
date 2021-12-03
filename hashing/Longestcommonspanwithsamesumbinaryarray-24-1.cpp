#include<bits/stdc++.h>
using namespace std;

int subarray_naive(int a[],int b[],int n){
int res=0;
for (int i = 0; i < n; i++)
{
    int p=0;int q=0;
    for (int j = i; j < n; j++)
    {
        p+=a[j];
        q+=b[j];
        if(p==q){
            res=max(res,j-i+1);
        }
    }
}
 return res;
}
int subarray_fast(int arr[],int n,int sum){
int res=0;
int pre_sum=0;
unordered_map<int,int> m;
for (int i = 0; i < n; i++)
{
  pre_sum+=arr[i];
  if(pre_sum==sum){
     res=i+1;
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
    int a[]={0,1,0,0,0,0};
    int b[]={1,0,1,0,0,1};
    cout<<subarray_naive(a,b,6)<<endl;
    int temp[6];
    for (int i = 0; i < 6; i++)
    {
        temp[i]=b[i]-a[i];
    }
    cout<<subarray_fast(temp,6,0)<<endl;
    return 0;
}