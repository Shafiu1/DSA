        #include <bits/stdc++.h>
        using namespace std;

        int main() {
            string s = "14/3*2";
            vector<int> st;
            int n = s.size();
            string op;
            char ch;
            int num = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] >= '0' and s[i] <= '9')
                {
                    if (num)
                    {
                        num *= 10;
                        num += s[i] - '0';
                    }
                    else
                    {
                        num = s[i] - '0';
                    }
                }
                else if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/')
                {
                    st.push_back(num);
                    op.push_back(s[i]);
                    num = 0;
                }
                else
                {
                    continue;
                }
            }
            st.push_back(num);
            int i = 0;
            while (i < op.size())
            {
                if (op[i] == '*' || op[i] == '/')
                {
                    int temp = 0;
                    if (op[i] == '*')
                        temp = st[i] * st[i + 1];
                    else
                        temp = st[i] / st[i + 1];

                    st[i] = temp;
                    st.erase(st.begin() + i + 1);
                    op.erase(op.begin() + i);
                    // Don't increment i, as we modified current position
                }
                else
                {
                    i++;
                }
            }

            int j = 1;
            int ans = st[0];
            for (int i = 0; i < op.size(); i++)
            {
                if (op[i] == '+')
                {
                    ans += st[j];
                    j++;
                }
                else
                {
                    ans -= st[j];
                    j++;
                }
            }
            cout<<ans<<endl;
        }