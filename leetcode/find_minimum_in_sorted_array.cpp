#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};
    int lt = 0;
    int n = nums.size();
    int rt = nums.size() - 1;
    int md = (lt + rt) / 2;
    while (lt <= rt)
    {
        md = (md + n) % n;
        lt = (lt + n) % n;
        rt = (rt + n) % n;
        md = (lt + rt) / 2;
        if (nums[lt] > nums[md] and nums[rt] > nums[md])
            break;
        else if (nums[lt] < nums[md] and nums[rt] < nums[md])
            lt++;
        else if (nums[lt] < nums[md] and nums[rt] > nums[md])
            rt--;
    }
    cout<<nums[md];
}