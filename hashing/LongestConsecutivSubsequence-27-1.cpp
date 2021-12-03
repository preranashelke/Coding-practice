#include<bits/stdc++.h>
using namespace std;

int longestconsequence(int arr[],int n){//naive solution
    sort(arr,arr+n);
int count=1;int res=1;
for(int i=0;i<n;i++){
 if(arr[i+1]==arr[i]+1){
     count++;
 }else{
     res=max(res,count);
     count=0;
 }   
}
res=max(res,count);
return res;
}

int longestconsequence1(int arr[],int n){
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    int res=0;
    for (int i = 0; i < n; i++)
    {
        if(s.find(arr[i]-1)==s.end()){
            int curr=1;
            while (s.find(arr[i]+curr)!=s.end())
            {
                curr++;
            }
            res=max(res,curr);
        }
    }
    return res;
}
int main(){
    int arr[]={1,9,3,4,2,20};
    int n=6;
    cout<<longestconsequence1(arr,6)<<endl;
    cout<<longestconsequence(arr,6)<<endl;

    return 0;
}