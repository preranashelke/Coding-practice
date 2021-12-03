#include<bits/stdc++.h>
using namespace std;
void span(int arr[],int n){
    stack<int>s;
       s.push(0);
       cout<<arr[0]<<"->"<<1<<endl;
       int span;
    for (int i = 0; i < n; i++)
    {
        while(s.empty()==false&&arr[i]>=arr[s.top()]){
            s.pop();
        }
        span=s.empty()? i+1:i-s.top();
        cout<<arr[i]<<"->"<<span<<endl;
        s.push(i);
    }
    
    
}
int main(){
    int arr[]={18,12,13,14,11,16};
    int arr1[]={60,10,20,40,35,30,50,70,65};
    int n=sizeof(arr1)/sizeof(int);
    span(arr1,n);
    return 0;
}