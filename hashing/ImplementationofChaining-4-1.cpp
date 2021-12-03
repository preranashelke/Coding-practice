#include<bits/stdc++.h>
using namespace std;
// C++ program to demonstrate implementation of our 
// own hash table with chaining for collision detection 
struct MyHash{
int bucket;
list<int>*table;
MyHash(int a){
    bucket=a;
    table=new list<int>[bucket];
}
void insert(int k){
    int index=k%bucket;
    table[index].push_back(k);
}
void remove(int x){
    int index=x % bucket;
    table[index].remove(x);
}
bool search(int k){
     int index=k%bucket;
    for(auto x:table[index]){
        if(x==k)
            return true;
    }
    return false;
}

};
int main(){
MyHash hp(7);
hp.insert(10);
hp.insert(20);
hp.insert(15);
hp.insert(7);
cout<<hp.search(10)<<endl;
hp.remove(15);
cout<<hp.search(15)<<endl;

    return 0;
}