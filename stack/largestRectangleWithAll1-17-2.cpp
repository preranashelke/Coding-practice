#include<bits/stdc++.h>

using namespace std;
#define n 4
int largest(int arr[],int p){
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
 return res;
}
 
 void maxArea(int arr[][n]){

     int res=largest(arr[0],n);
     for (int i = 1; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
            if(arr[i][j]==1){
                arr[i][j]+=arr[i-1][j];
            }
           
         }
          res=max(res,largest(arr[i],n));
         
     }
    cout<<res<<endl;

 }

int main(){
  
    int arr[n][n];
 for (int i = 0; i < n; i++)
 {
     for (int j = 0; j < n; j++)
     {
        cin>>arr[i][j];
     }
     
 }
 maxArea(arr);
    return 0;
}