#include<bits/stdc++.h>
using namespace std;


int printing(int n){
if(n==0){
    return 0;
}
return printing(n-1)+n;

}
int main(){
 int n;
cout<<"Enter the number :"<<endl;
cin>>n;
cout<<printing(n)<<endl;

    return 0;
}