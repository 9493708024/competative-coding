#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    //freopen("input.txt","r",stdin);//dont forget to remove while submitting 
    cout<<"ads";
    string s,ans,subs;
    getline(cin,s);
    getline(cin,subs);
    cout<<"ads";
    int n=s.length();
    if(n<=10){
        n=n-1;
    }
    else {
        n=n-2;
    }

        cout<<"ads";
        string num;
        stringstream convert;
        convert <<n;
        num=convert.str();
        num+=subs;
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++){
                if(s[i]==num[j]){
                    s.erase(s.begin()+i);
                    break;
                }
            }
        }
        cout<<"ads";
        sort(s.begin(),s.end());
        char max='Z';
        for(int i=0;i<subs.length();i++){
            if(subs[i] > max)max=subs[i];
        }
        for(int i=0;i<s.length();i++){
            if(max<=s[i]){
                ans+=subs;
                for(int j=i+1;j<s.length();j++){
                    ans+=s[i];
                }
                break;
            }
            else ans+=s[i];
        }
        cout<<ans<<endl;


    


    return 0;
}
