#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
	freopen("input.in","r",stdin);
   int n,u=0;

    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
            cin>>a[i];
    }
    long long mx=-LLONG_MAX,max_s,min_s,sd;
    for(int i=0;i<n;i++){
        for(int j=0;j!=i && j<n;j++){
            for(int k=0;k!=j && k!=i && k<n;k++)
                {
                if(a[i]+a[j]>a[k] && a[j]+a[k]>a[i] && a[k]+a[i]>a[j] )
                    {
                    	u++;
                    if(mx<(a[i]+a[j]+a[k])){
                        max_s=max(a[i],max(a[j],a[k]));
                        min_s=min(a[i],min(a[j],a[k]));
                        mx=a[i]+a[j]+a[k];
                        sd=mx-(max_s+min_s);
                    }
                    else if(mx==a[i]+a[j]+a[k]){
                        if(max_s<max(a[i],max(a[j],a[k]))){
                            max_s=max(a[i],max(a[j],a[k]));
                            min_s=min(a[i],min(a[j],a[k]));
                        //max=a[i]+a[j]+a[k];
                            sd=mx-(max_s+min_s);
                        }
                        else if(max_s==max(a[i],max(a[j],a[k]))){
                            if(min_s<min(a[i],min(a[j],a[k]))){
                                max_s=max(a[i],max(a[j],a[k]));
                                 min_s=min(a[i],min(a[j],a[k]));
                        //max=a[i]+a[j]+a[k];
                                sd=mx-(max_s+min_s);
                            }
                        }
                    }
                }
            }
        }
    }
    if(u==0)cout<<-1<<endl;
    else cout<<min_s<<" "<<sd<<" "<<max_s<<endl;
    
    return 0;
}