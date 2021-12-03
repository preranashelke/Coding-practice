#include<bits/stdc++.h>
using namespace std;
void span(int arr[],int n){
    stack<int>s;
      
    for (int i = 0; i < n; i++)
    {
       while(!s.empty()&& arr[i]>=s.top()){
           s.pop();
       }
        if(s.empty()){
           cout<<arr[i]<<"->"<<-1<<endl;
       }
       if(!s.empty()&&s.top()>arr[i]){
            cout<<arr[i]<<"->"<<s.top()<<endl;
       }
       s.push(arr[i]);
    }
    
    
}
int main(){
    int arr[]={18,12,13,14,11,16};
    int arr1[]={15,10,18,12,4,6,2,8};
    int n=sizeof(arr1)/sizeof(int);
    span(arr1,n);
    return 0;
}