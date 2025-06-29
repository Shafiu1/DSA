#include <bits/stdc++.h>
using namespace std;

int gcdRec(int a,int b){
    if(b==0)
        return a;
    return gcdRec(b,a%b);
}
int gcd(int a,int b){
    while(a> 0 and b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}
int main() {
    cout<<gcd(30,40)<<endl;
    cout<<gcd(21,25)<<endl;
    return 0;
}