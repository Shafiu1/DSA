#include <bits/stdc++.h>
using namespace std;


// int binarySearch(vector<int>arr,int tar){
//     int st=0,end=arr.size()-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;//for overflow handling.
//         if(arr[mid]<tar){
//             st=mid+1;
//         }else if(tar<arr[mid]){
//             end=mid-1;
//         }else
//             return mid;
//     }
//     return -1;
// }
//using recursive function
int binarySearch(vector<int> arr, int tar,int st,int end)
{
    if(st<=end){
        int mid = st + (end - st)/2;
        if (tar > arr[mid]){
            return binarySearch(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid]){
            return binarySearch(arr, tar, st, mid - 1);
        }else{
            return mid;
        } 
    }

    return -1;
}
int main() {
    vector<int> arr1={-1,0,3,4,5,9,12};//odd 
    int tar1=12;
    vector<int>arr2={-1,0,3,5,9,12};
    int tar2=12;
    cout<<"The result of binary search: "<<binarySearch(arr1,tar2,0,arr1.size()-1);
    return 0;
}