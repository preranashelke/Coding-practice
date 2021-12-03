#include<bits/stdc++.h>
using namespace std;

bool palindrome(string n,int start,int end){
if(start>=end){
    return true;
}
return (n[start]==n[end])&& palindrome(n,start+1,end-1);


}
int main(){
    string n;
    cout<<"enter any string:"<<endl;
    cin>>n;
cout<<palindrome(n,0,n.length()-1)<<endl;
    return 0;
}