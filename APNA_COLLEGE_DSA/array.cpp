#include <bits/stdc++.h>
using namespace std;


void changeArr(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]+1;
    }
}
int main() {
    int arr[]={1,2,3};
    changeArr(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}

//Array->implicitely pass by reference
//linear search...
//reversing an array(2-pointer).