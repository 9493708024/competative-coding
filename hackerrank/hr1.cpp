#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//int a[3001][3001];

int main() {
    int t;
    
    cin>>t;
    while(t>0){
        t--;
        int n,m;
        cin>>n>>m;
        int v[n+1],vis[n+1],mn=INT_MAX,q, u=0, a[n+1][n+1];
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++)
                a[i][j]=0;
        }
        for(int i=0;i<m;i++){
                int x,y,r;
                cin>>x>>y>>r;
                a[x][y]=1;
                a[y][x]=1;
        }

        int s;
        cin>>s;
        
        
        cout<<"daf1";
        
        fill_n(vis,n+1,0);
        fill_n(v,n+1,30000);
        v[s]=0;
        cout<<"daf";
        while(1){
            mn = 3000000;
            for(int i=1;i<n+1;i++){
                if(a[s][i]>0 && vis[i]==0){
                    v[i]=min(v[s]+a[s][i],v[i]);
                }
                
                for(int j=1;j<n+1;j++){
                    if(mn>v[j] && vis[j]==0){
                        mn=v[j];
                        u++;
                        q=j;
                    }
                }
                if(u==0)break;
                else u=0;
                s=q;
                vis[q]=1;
                for(int i=0;i<n;i++)cout<<vis[i]<<" ";
                
            }
        }
        for(int i=1;i<n+1;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }  
    return 0;
}
