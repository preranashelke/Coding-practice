#include<bits/stdc++.h>
using namespace std;
void booleanm1(bool arr[4][3]){  //auxillary space(m+n)

    bool a[4];
    bool b[3];
    for (int i = 0; i < 4; i++)
    {
        a[i]=0;
    }
    for (int i = 0; i < 3; i++)
    {
        b[i]=0;
    } 
    for (int i = 0; i < 4; i++)
    {
       for(int j=0;j<3;j++){
           if(arr[i][j]==1){
               a[i]=1;
               b[j]=1;
           }
       }
    }
    for (int i = 0; i < 4; i++)
    {
       for(int j=0;j<3;j++){
           if(a[i]==1||b[j]==1){
               arr[i][j]==1;
           }
       }
    }
}
int main(){
bool arr[4][3]={{1,0,0},
                {1,0,0},
                {1,0,0},
                {1,0,0}};

booleanm1(arr);
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<arr[i][j]<<" ";
    } 
    cout<<endl;
}
    return 0;
}