#include <bits/stdc++.h>
using namespace std;

int main() {
    int x=0;
    x|=(1<<1); // Your code here
    x|=(1<<3); // Your code here
    x|=(1<<4); // Your code here
    x|=(1<<8);
    cout<<__builtin_popcount(x)<<endl;

    //bit representations.
    for(int i=31;i>=0;i--){
        if(x&(1<<i)){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
    cout<<endl; // Your code here
    return 0;
}