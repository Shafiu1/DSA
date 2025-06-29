    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        string word = "aabcaba";
        int k=0;
        int mpp[26]={0};
        for(int i=0;i<word.size();i++){
            mpp[word[i]-'a']++;
        }
        int ans=word.size();
        for(int i=0;i<26;i++){
            if(mpp[i]>0){
                int sinpass=0;
                for(int j=0;j<26;j++){
                    if(mpp[j]>0){
                        if((mpp[j]-mpp[i])>=0){
                            sinpass+=max(0,mpp[j]-mpp[i]-k);
                        }else{
                            sinpass+=mpp[j];
                        }
                }
                }
                ans=min(ans,sinpass);
            }
        }
        cout<<ans<<endl;
        return 0;
    }