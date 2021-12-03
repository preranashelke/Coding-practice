#include<bits/stdc++.h>
using namespace std;
int noelements(int arr[],int n){
  //  int count=0;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    
    return s.size();
}
int main(){
int arr[]={15,12,13,12,13,13,18};
int n=7;
cout<<noelements(arr,n)<<endl;

return 0;
}