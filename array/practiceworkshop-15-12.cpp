#include<bits/stdc++.h>
using namespace std;
int main(){

    // unordered_map<int, int> m;
    // int a[]={1,2,3,4,5,3,3,2,2,4};
    // for (int i = 0; i < 10; i++)
    // {
    //    m[a[i]]++;
    // }
    // for(auto i:m){
    //     cout<<i.first<<":"<<i.second<<endl;
    // }

    map<int,int> m;
    int a[]={2,5,2,8,5,6,8,8};
    for (int i = 0; i < 8; i++)
    {
        m[a[i]]++;
    }
    int count,ans;
    while (m.size())
    {
        count=0;
        for(auto i:m){
            if(i.second>count){
                count=i.second;
                ans=i.first;
            }
        }
        for (int i = 0; i < count; i++)
        {
           cout<<ans<<" ";
        }
        m.erase(ans);
        
    }
    
    return 0;
}