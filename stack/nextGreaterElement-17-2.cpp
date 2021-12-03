#include<bits/stdc++.h>
using namespace std;
void greaterE(int arr[],int n){
    stack<int>s;
   for (int i = n-1; i >=0; i--)
   {
       while(!s.empty()&&arr[i]>=s.top()){
           s.pop();
       }
       if(s.empty()){
           cout<<arr[i]<<"->"<<-1<<endl;
       }
       if(!s.empty()&&arr[i]<s.top()){
           cout<<arr[i]<<"->"<<s.top()<<endl;
       }
       s.push(arr[i]);
   }
   
    
}
int main(){
    int arr[]={18,12,13,14,11,16};
    int arr1[]={5,15,10,8,6,12,9,18};
    int n=sizeof(arr1)/sizeof(int);
    greaterE(arr1,n);
    return 0;
}