#include <bits/stdc++.h>
using namespace std;

int main() {
    int right=1000000,left=999998;
    vector<bool> v(right + 1, true);
    vector<int> ans;

    v[0] = v[1] = false;

    // Mark even numbers (except 2) as not prime
    for (int i = 4; i <= right; i += 2)
        v[i] = false;

    // Sieve of Eratosthenes with overflow-safe loop
    int limit = sqrt(right) + 1;
    for (int i = 3; i <= limit; i += 2)
    {
        if (v[i])
        {
            for (long long j = 1LL * i * i; j <= right; j += 2LL * i)
            {
                v[j] = false;
            }
        }
    }

    // Collect primes in range
    for (int i = max(2, left); i <= right; ++i)
    {
        if (v[i])
            ans.push_back(i);
    }
    int minDiff = INT_MAX, num1 = -1, num2 = -1;
    // No or only one prime in range
    if (ans.size() < 2){
        num1=-1;
        num2=-1;
    }

    // Find closest pair
    
    for (int i = 1; i < ans.size(); ++i)
    {
        int diff = ans[i] - ans[i - 1];
        if (diff < minDiff)
        {
            minDiff = diff;
            num1 = ans[i - 1];
            num2 = ans[i];
        }
    }

    cout<<num1<<" "<<num2; // Your code here
}