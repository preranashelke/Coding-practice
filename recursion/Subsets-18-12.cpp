#include<bits/stdc++.h>
using namespace std;
//given string  possible subsets

void subsets(string str,string curr, int index){
if(index==str.length()){
    cout<<curr<<" ";
    return;
}

subsets(str,curr,index+1);
subsets(str,curr+str[index],index+1);
}
int main(){
string str="ABC";

int n=str.length();
subsets(str,"",0);
    return 0;
}