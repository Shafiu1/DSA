#include <bits/stdc++.h>
using namespace std;

int main() {
    // cout<< -1+(1<<31)<<endl; 
    cout<<INT_MAX<<endl;
    // cout<<INT_MIN*(-1)<<endl;
    string str = "2147483648";
    cout<<to_string(INT_MAX)<<endl;
    cout<<(str>to_string(INT_MAX));
}