#include<bits/stdc++.h>
using namespace std;
int sqroot(int n){ //0(n^1/2)
    int i=1;
  while(i*i<=n){
      i++;
  }
    return i-1;

}
int sqroot1(int n){
    int start=0;
    int end=n-1;
    int ans=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        int p=mid*mid;
        if(p==n){
            return mid;
        }else
        if(p>n){
            end=mid-1;
        }else {
          start=mid+1;
            ans=mid;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<sqroot(n)<<endl;
    cout<<sqroot1(n)<<endl;
    
    return 0;
}