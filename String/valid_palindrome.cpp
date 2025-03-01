#include <bits/stdc++.h>
using namespace std;
bool isAlphaNum(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
        return true;
    return false; 
}
bool palindromTest(string &str){
    int left =0;
    int right=str.size();
    while(left<right){
        if(!isAlphaNum(str[left]))
        {
            left++;continue;
        }
        if(!isAlphaNum(str[right])){
            right--;continue;
        }
        if(tolower(str[left])!=tolower(str[right]))
            return false;
        left++;right--;
    }
    return true;
}
int main() {
    string str;
    cin>>str;
    if(palindromTest(str))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    return 0;
}