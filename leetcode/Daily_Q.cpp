        #include <bits/stdc++.h>
        using namespace std;

        int main() {
            string word="aann";
            int numFriends=2;
            if (numFriends == 1)
                cout<< word;
            int n = word.size();
            int max_c=n-(numFriends-1);
            string ans = "";
            for (int i = 0; i<=n-max_c; i++)
            {
                string temp = word.substr(i, n - numFriends + 1);
                cout<<temp<<endl;
                if (temp > ans)
                {
                    ans = temp;
                }
            }
            cout<<ans;
            return 0;
        }