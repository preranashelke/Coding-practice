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
           arr[b-1]=c;
        }
        if(a==2){
           cout<<arr[b-1]^arr[c-1];
            
        }
        cout<<endl;
    }
    return 0;
}