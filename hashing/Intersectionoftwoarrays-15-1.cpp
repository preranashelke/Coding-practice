#include<bits/stdc++.h>
using namespace std;
int intersection(int a[],int b[],int n,int m){
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
       s.insert(a[i]);
    }
    int res=0;
    for (int i = 0; i < m; i++)
    {
      if(s.find(b[i])!=s.end()){
      res++;
      s.erase(b[i]);
      }
    }
    return res;
}
int main(){
    int a[]={10,15,20,15,30,30,5};
    int b[]={30,5,30,80};
    cout<<intersection(a,b,7,4);
    return 0;
}