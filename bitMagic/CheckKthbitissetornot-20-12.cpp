#include<bits/stdc++.h>
using namespace std;

void kttBit(int n,int k){

if(n&(1<<k-1)!=0){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}

}
int main(){
int n,k;
cout<<"enter any number"<<endl;
cin>>n,k;
kttBit(n,k);
    return 0;
}