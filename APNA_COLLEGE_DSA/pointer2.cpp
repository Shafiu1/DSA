#include <bits/stdc++.h>
using namespace std;


void change(int &ptr){//pass by reference
    ptr=20;
}
int main() {
    int a=10;
    change(a);
    cout<<"New value of a :" <<a<<endl; // Your code here
    return 0;
}

//array is a constant pointer..