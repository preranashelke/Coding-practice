#include<bits/stdc++.h>
using namespace std;
int union1(int a[],int b[],int n,int m){
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
       s.insert(a[i]);
    }
    
    for (int i = 0; i < m; i++)
    {
     s.insert(b[i]);
    }
    return s.size();
}
int main(){
    int a[]={15,20,5,15};
    int b[]={15,15,15,20,10};
    cout<<union1(a,b,4,5);
    return 0;
}