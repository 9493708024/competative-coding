#include<bits/stdc++.h>
using namespace std;
string s2;
int m1[26],m2[26];

inline bool r(string s1){
    int n=s2.length();
         int count=0;
        fill_n(m1,26,0);
        fill_n(m2,26,0);
    int qw=0;
    for(int i=0;i<n;i++){
        if(s1[i]!='?')
            m1[(int)(s1[i]-97)]++;
        else qw++;
    }
    for(int i=0;i<n;i++){
        m2[(int)(s2[i]-97)]++;
    }
    for(int i=0;i<26;i++){
        count+=min(m1[i],m2[i]);
    }
    //cout<<count<<" "<<qw<<" "<<n<<endl;;
    if(n==(qw+count))
        return true;
    else return false;
}

inline bool ck(){
    for(int i=0;i<26;i++){
        if(m1[i]>m2[i])
            return false;
    }
    return true;
}
int main(){
    string s1;
    int res=0;
    cin>>s1>>s2;
    if(s2.length() > s1.length())
            cout<<0<<endl;
    else {
        
        int n=s2.length();
        int len=s1.length();
        string ss=s1.substr(0,n);
        if(r(ss)==true)
            res++;
        for(int i=1;i+n<=len;i++){
           if(s1[i-1]!='?')m1[s1[i-1]-97]--;
           if(s1[i+n-1]!='?')m1[s1[i+n-1]-97]++;
           if(ck()==true)
               res++;
           //cout<<s1[i+n-1]<<endl;

        }

        cout<<res<<endl;
    }
}
