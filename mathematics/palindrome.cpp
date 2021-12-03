#include<bits/stdc++.h>
using namespace std;
void palindrome(int n){
    int t=n;
    int p=0;
     while(n!=0){
       int r=n%10;
      p=p*10+r;
    
       n=n/10;
       
     }
     if(t==p){
         cout<<"number is palindromic"<<endl;
     }else{
         cout<<"number is not palindromic"<<endl;
     }

}
int main(){

    int n;
    cout<<"enter the number to check whether number is palindromic or not:"<<endl;
    cin>>n;
    palindrome(n);
    return 0;
}