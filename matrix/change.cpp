#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(q--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1){
        unordered_set<int>s;
        for(int i=b-1;i<c;i++){
            s.insert(arr[i]);
        }
        // for(auto x:s){
        //     cout<<x<<" ";
        // }
        cout<<endl;
        cout<<s.size();
        }
        if(a==2){
            arr[b-1]=c;
            
        }
        cout<<endl;
    }
    return 0;
}