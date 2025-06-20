// #include <bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

int main() {
    vector<char>vec={'a','b'};
    for(char ch:vec){
        cout<<ch<<" ";
    }
    cout<<vec.size();
    vec.push_back('g');
    cout<<vec.size()<<endl;
    //vector.back()=>return the last value
    cout<<vec.back()<<endl;
    //vector.at(index)
    // cout<<vec.at(3)<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;;
    return 0;
}

//STL-standard template library.
//STL Container->vector(dynamic array),map,set,stack,queue.