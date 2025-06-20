#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int a=10;
    int* ptr=&a;
    int** parptr=&ptr;
    cout<<**(parptr)<<endl;
    int nptr=NULL;
    cout<<nptr<<endl;
    return 0;
}
