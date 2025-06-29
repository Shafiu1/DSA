#include <bits/stdc++.h>
using namespace std;
#include<string>

int main() {
    string str1="Juldha village"; //dynamic=> runtime resize
    char str[100];
    cout<<"Enter your string:";
    cin >> str;
    cout<<str<<endl;
    cin.getline(str,100,'$');
    cout<<str<<endl;
    // Your code here
    // getline(cin,str1," ");
    return 0;
}