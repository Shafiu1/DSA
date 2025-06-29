#include <bits/stdc++.h>
using namespace std;
bool canFormSquare(int l1, int b1, int l2, int b2, int l3, int b3)
{
    int side = max({l1, b1, l2, b2, l3, b3});

    if (l1 == l2 && l2 == l3 && l1 == side && b1 + b2 + b3 == side)
        return true;
    if (b1 == b2 && b2 == b3 && b1 == side && l1 + l2 + l3 == side)
        return true;
    if (l1 == side && b2 == b3 && b1 + b2 == side && l2 + l3 == side)
        return true;
    if (b1 == side && l2 == l3 && l1 + l2 == side && b2 + b3 == side)
        return true;

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        if (canFormSquare(l1, b1, l2, b2, l3, b3))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
