#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int geli=min(a,c);
        int flo=min(b,d);
        if(geli>=flo){
            cout << "Gellyfish"<<endl;
        }else
            cout<<"Flower"<<endl;
    }
    return 0;
}