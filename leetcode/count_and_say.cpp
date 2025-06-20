#include <bits/stdc++.h>
using namespace std;

string check(int n, int k, string ans)
{
    if (k == n){
        return ans;
    }else{
        string temp = "";
        int count = 1;
        for (int i = 0; i < ans.size()-1; i++){
            if (ans[i] == ans[i+1])
            {
                count += 1;
                continue;
            }
            temp += to_string(count) + ans[i];
            count=1;
    
        }
        temp += to_string(count) + ans[ans.size() - 1];
        return check(n, k + 1, temp);
    }
    return ans;
}

int main()
{
    int n=6;
    cout<<check(n,1,"1");
    return 0;
}