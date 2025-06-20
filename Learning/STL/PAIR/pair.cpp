#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int,string>p;
    p={2,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string>&p1=p;//pass by reference. So, p will update when we change p1.
    p1.first=4;
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0],p_array[2]);
    return 0;
}