#include<bits/stdc++.h>
using namespace std;
vector<int> window_naive(int arr[],int k,int n){
vector<int> res;
for (int i = 0; i < n-k+1; i++)
{
    unordered_set<int> s;
 for (int j = i; j < k+i; j++)
 {
     s.insert(arr[j]);
 }
  res.push_back(s.size());  
}
return res;
}
vector<int> window_fast(int arr[],int k,int n){
  vector<int> res;
  unordered_map<int,int> m;
  for (int i = 0; i < k; i++)
  {
    m[arr[i]]++;
  }
  res.push_back(m.size());
  for (int i = k; i < n; i++)
  {
    m[arr[i-k]]--;
    if(m[arr[i-k]]==0){
      m.erase(arr[i-k]);
    }
    m[arr[i]]++;
    res.push_back(m.size());
  }

return res;
}
int main(){
    int a[]={10,20,20,10,30,40,10};
    vector<int> p=window_naive(a,4,7);
    for (int i = 0; i < p.size(); i++)
    {
       cout<<p[i]<<" ";
    }
    cout<<endl;
    vector<int> q=window_fast(a,4,7);
     for (int i = 0; i < q.size(); i++)
    {
       cout<<q[i]<<" ";
    }
    return 0;
}