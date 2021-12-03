#include<bits/stdc++.h>
using namespace std;
int subarray_naive(int arr[],int n){
    int res=0;
    for (int i = 0; i < n; i++)
    {
        int a=0,b=0;
        for (int j = i; j < n; j++)
        {
            if(arr[j]==0){
                a++;
            }
            else{
                b++;
            }
            if(a==b){
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
    int a[]={0,0,1,1,1,1,1,0};
    int b[]={1,0,1,1,1,0,0};
    cout<<subarray_naive(a,8)<<endl;
    cout<<subarray_naive(b,7)<<endl;
    int n=7;
    for (int i = 0; i < n; i++)
    {
        if(b[i]==0){
            b[i]=-1;
        }
    }
    cout<<subarray_fast(b,n,0)<<endl;
    return 0;
}