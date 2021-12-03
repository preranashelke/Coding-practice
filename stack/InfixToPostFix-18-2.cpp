#include<bits/stdc++.h>
using namespace std;
int precedence(char a){
    if(a=='^') return 4;
    if(a=='*'||a=='/') return 3;
    if(a=='+'||a=='-') return 2;
    if(a=='('||a=='[') return 1;
    return 0;
}
string conversion(string str){
int n=str.length();
stack<int> st;
string res="";
for (int i = 0; i < n; i++)
{
    if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
        res+=str[i];
    }else 
    {
      if(!st.empty()&&precedence(st.top())>precedence(str[i])){
                char a=st.top();
                st.pop();
                res+=a;
      }else{
          st.push(str[i]);
      }
    }
}
while(!st.empty()){
    char a=st.top();
    st.pop();
    res+=a;
}
return res;
}
int main(){
    string str="a+b*c";
   string a=conversion(str);
   for(int i=0;i<a.length();i++){
       cout<<a[i];
   }
   cout<<endl;
    return 0;
}