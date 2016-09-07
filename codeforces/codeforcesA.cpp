#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    freopen("input.txt","r",stdin);//dont forget to remove while submtting

    int n,m,p;
    cin>>n>>m>>p;
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    int c=p-1;
    for(int i=0;i<s1.length();i++){
        cout<<s<<" "<<c+1<<" "<<s1[i]<<endl;
        if(s1[i]=='R'){
            c++;                
        }
        else if(s1[i]=='L'){
             c--;
        }
        else {
            if(s[c]=='('){
                int j=c;
                int count=1;
                while(1){
                    c++;
                    if(s[c]=='(')count++;
                    else if(s[c]==')')count--;
                    if(count==0)break; 
                }
                s.erase(j,c-j+1);
                c=j;
                if(c>s.length()-1)c=j-1;                

            }
            else {
                int j=c;
                int count=1;
                while(1){
                    c--;
                    if(s[c]==')')count++;
                    else if(s[c]=='(')count--;
                    if(count==0)break; 
                }
                s.erase(c,j-c+1);
                if(c+1>s.length()-1)c=c-2;
                
                
            }
        }
    }

    cout<<s<<"\n";

       return 0;
}