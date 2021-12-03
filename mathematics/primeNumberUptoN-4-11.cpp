#include<bits/stdc++.h>
using namespace std;

 void primenumbers1(int n){  //reduce solution
     vector<bool> prime1(n+1,true);
     for(int i=2;i<=n;i++){
         if(prime1[i]){
             cout<<i<<" ";
             for(int j=i*i;j<=n;j=j+i){
               prime1[j]=false;  
             }
         }
     }
 }
void primenumbers(int n){   //sieve algorithm
    vector<bool> prime1(n+1,true);

    for (int i = 2; i <=n; i++)
    {
        if(prime1[i]){
          for (int j = i*i; j<=n; j=i+j)
            prime1[j]=false;
        }
    }
    for(int i=2;i<=n;i++){
              if(prime1[i]){
                  cout<<i<<" ";
              }
        }
    
}
int main(){
    int n;
    cin>>n;
    primenumbers1(n);
    cout<<endl;
    return 0;
}