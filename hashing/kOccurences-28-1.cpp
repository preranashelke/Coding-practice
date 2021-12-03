#include<bits/stdc++.h>
using namespace std;
vector<int> occurrance(int arr[],int k,int n){ //0(n)
vector<int> res;
unordered_map<int ,int>m;
for (int i = 0; i < n; i++)
{
    m[arr[i]]++;
}
for(auto i:m){
    if(i.second>n/k){
        res.push_back(i.first);
    }
}
return res;
}

int main(){
    int a[]={30,10,20,20,10,20,30,30};
    vector<int> p=occurrance(a,4,9);
    for (int i = 0; i < p.size(); i++)
    {
       cout<<p[i]<<" ";
    }
    cout<<endl;
  
    return 0;
}