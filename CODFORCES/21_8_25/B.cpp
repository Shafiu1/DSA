#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            int dx, dy, x, y;
            cin >> dx >> dy >> x >> y;
            int tx = (dx == 1) ? s - x : x;
            int ty = (dy == 1) ? s - y : y;
            if (tx == ty)
                count++;
        }
        cout << count << '\n';
    }
    return 0;
}
