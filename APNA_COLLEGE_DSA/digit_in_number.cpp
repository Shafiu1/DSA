#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=123453;
    int no_of_digit=log10(n)+1;
    cout<<no_of_digit<<endl;
    while(n!=0){
        cout<<n%10<<" ";
        n/=10;
    } // Your code here
    return 0;
}