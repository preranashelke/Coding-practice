#include<bits/stdc++.h>
using namespace std;
void largest(int arr[],int n){
    stack<int>s;
    int area=0;
    int res=0;
 for(int i=0;i<n;i++){
     while(s.empty()==false&&arr[s.top()]>=arr[i]){
       int a= s.top();
       s.pop();
       area= arr[a]* (s.empty()?i:(i-s.top()-1));
       res=max(area,res);
     }
     s.push(i);
 }
 while(s.empty()==false){
     int a= s.top();
       s.pop();
       area=arr[a]*(s.empty()? n:n-s.top()-1);
       res=max(res,area);
 }
  cout<<"max area"<<res<<endl; 
}
int main(){
    int arr[]={18,12,13,14,11,16};
    int arr1[]={6,2,5,4,1,5,6};
    int n=sizeof(arr1)/sizeof(int);
    largest(arr1,n);
    return 0;
}