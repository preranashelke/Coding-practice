#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n<10){
        return n;
    }
return (n%10)+sum(n/10);
}
int main(){
 int n;
cout<<"Enter the number :"<<endl;
cin>>n;
cout<<sum(n)<<endl;
    return 0;
}