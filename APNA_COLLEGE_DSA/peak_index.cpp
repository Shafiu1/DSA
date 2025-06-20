    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int num=123456;
        string s=to_string(num);
        int n=s.size();
        char remap='9';
        int non_zero=0;
        char remtwo='1';
        for(int i=0;i<n;i++){
            if(s[i]!=0){
                non_zero++;
                if(s[i]=!'1')
                    remtwo=s[i];
            }if(non_zero==2){
                break;
            }
        }
        string s1=s;
        for(int i=0;i<n;i++){
            if(s[i]==remtwo){
                if(non_zero==2){
                    s1[i]='0';
                }else{
                    s1[i]='1';
                }
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]!='9'){
                remap=s[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]==remap){
                s[i]='9';
            }
        }
        cout<<stoi(s)-stoi(s1);
    }