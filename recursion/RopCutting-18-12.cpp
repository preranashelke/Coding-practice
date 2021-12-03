#include<bits/stdc++.h>
using namespace std;
//maximum cut can be possible by given length of rope
int maxcuts(int n,int a,int b,int c){
if(n<=-1){
    return -1;
}
if(n==0){
    return 0;
}
int p=maxcuts(n-a,a,b,c);
int q=maxcuts(n-b,a,b,c);
int r=maxcuts(n-c,a,b,c);
int sum=max(max(p,q),r);
if(sum==-1){
    return -1;
}
return sum+1;
}

int main(){
 int n;
cout<<"Enter the length :"<<endl;
cin>>n;
int a,b,c;
cout<<"enter the subsets of length:"<<endl;
cin>>a>>b>>c;
cout<<maxcuts(n,a,b,c)<<endl;
    return 0;
}