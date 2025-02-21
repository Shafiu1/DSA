#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>&v,int target,int left,int right){
    if(left>right){return -1;}
    int mid=left+(right-left)/2;
    if(v[mid]==target)
        return mid;
    else if(v[mid]<target)
        return bs(v,target,left+1,right);
    else
        return bs(v,target,left,right-1);
    return -1;
}
int main(){
    vector<int>v={-1,0,3,5,9,12};
    cout<<bs(v,-6,0,v.size()-1)<<endl;
}