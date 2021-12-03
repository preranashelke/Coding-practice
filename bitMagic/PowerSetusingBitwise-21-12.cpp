#include<bits/stdc++.h>
using namespace std;

void powerset(string str){
    int n=str.length();
    int size=pow(2,n);
    for (int counter = 0; counter < size; counter++)
    {
       for (int j = 0; j < n; j++)
       {
          if((counter&(1<<j))!=0){
              cout<<str[j];
          }
       }
       cout<<endl;
       
    }
    
}
int main(){
string str="abc";
powerset(str);
return 0;
}