#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        set<int>s,temp;
        int ans=0;
        s.insert(v[0]);
        temp.insert(v[0]);
        for(int i=0;i<n;i++){
            if(s.find(v[i])!=s.end()){
                s.erase(v[i]);
            }
            temp.insert(v[i]);
            if(s.size()==0){
                ans+=1;
                s=temp;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}