#include<bits/stdc++.h>
using namespace std;
bool prime1(int n){
    if(n==1) return false;  //check for 1
    if(n==2||n==3) return true; //check for 2 and 3
    if(n%2==0||n%3==0) return false;   //if divisible thry are not prime

    for(int i=5;i*i<=n;i=i+6)  //incresing direct by 6 
        if((n%i==0)||(n%(i+2)==0))    //faster as 3 times
        return false;
     
    return true;
}
void primefactors(int n){   //naive solution
for(int i=2;i<n;i++){
    if(prime1(i)){  //checking only for prime number
        int x=i;
       while(n%x==0){
           cout<<i;
           x=x*i;    //checking its multiple for factor
       }
    }
}
}
void primefactors1(int n){   //efficient solution
 if(n<=1){
    return;
}
for(int i=2;i*i<=n;i++){
    while(n%i==0){   //continously dividing by a number to obatain factor common method
        cout<<i<<" ";
        n=n/i;
    }
}
if(n>1){   //edge case
        cout<<n;
    }
}

void primefactors2(int n){  //optimized solution
    if(n<=1){
        return;
    }
     while(n%2==0){  //checking for 2
         cout<<2<<" ";
         n=n/2;
     }
    
  
       while(n%3==0){  //checking for 3
         cout<<3<<" ";
         n=n/3;
     }  
    
for (int i = 5; i*i<=n; i=i+6)
{
    while(n%i==0){
       cout<<i<<" ";
       n=n/i;
    }

    while(n%(i+2)==0){
        cout<<i+2<<" ";
        n=n/i+2;
    }
}
if(n>3){   //edge case
    cout<<n;
}
}
int main(){
int n;
cin>>n;
primefactors2(n);
cout<<endl;

    return 0;
}