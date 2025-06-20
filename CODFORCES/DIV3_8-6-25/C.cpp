#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int min_te=v[0]/1;
        for(int i=1;i<=n;i++){
            min_te=min(min_te,v[i-1]/(i));
        }
        for(int i=0;i<n;i++){
            v[i]=v[i]-min_te*(i+1);
        }
        int min_term=v[0]/n;
        bool flag=false;
        for(int i=0;i<n;i++){
            int temp=v[i]/(n-i+1);
            if(v[i]%(n-i+1)==0 && temp==min_term)
                flag=true;
            else{
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}