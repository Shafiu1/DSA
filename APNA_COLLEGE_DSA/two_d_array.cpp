#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4;
    int sum=0;
    for(int i=0;i<n;i++){
        if(i!=n-i-1)
            sum+=matrix[i][n-i-1];
        sum+=matrix[i][i];
    }
    cout<<sum<<endl;
    return 0;
}