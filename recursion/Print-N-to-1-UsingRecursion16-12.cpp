#include<bits/stdc++.h>
using namespace std;

void naturalno(int n){
if(n==0){
    return ;
}

naturalno(n-1);
cout<<n<<" ";
}
int main(){
int n;
cout<<"enter any number:"<<endl;
cin>>n;
naturalno(n);


    return 0;
}