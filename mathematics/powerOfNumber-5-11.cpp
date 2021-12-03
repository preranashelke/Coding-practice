#include<bits/stdc++.h>
using namespace std;

int power1(int a,int b){
    int res=1;
while(b>0){
if(b%2!=0)
res=res*a;
a=a*a;
b=b/2;
}
return res;
}

int power(int a,int b){  //recursive solution
if(b==0){
    return 1;
}

int res=power(a,b/2);
if(b%2==0){
    return res*res;
}else{
    return a*res*res;
}

}

int main(){

    int a,b;
    cin>>a>>b;
    int x=power1(a,b);
    cout<<x<<endl;
    return 0;
}