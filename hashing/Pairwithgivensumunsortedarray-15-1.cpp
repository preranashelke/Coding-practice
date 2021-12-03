#include<bits/stdc++.h>
using namespace std;

bool givensum(int a[],int n,int sum){
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
      if(s.find(sum-a[i])!=s.end()){
          return  true;
      }
      s.insert(a[i]);
    }
    return false;
}
int main(){
    int a[]={3,2,8,15,-8};
    cout<<givensum(a,5,17);
    return 0;
}