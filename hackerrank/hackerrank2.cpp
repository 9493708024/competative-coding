#include <cmath>
#include <cstdio>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
   int n,c=0;
    cin>>n;
    long long a[n],mx=-LLONG_MAX;
    for(int i=0;i<n;i++)
        cin>>a[i];  
    while(1){
        c=0;
        for(int i=0;i<n-2;i++){
            if((a[i+2]^a[i]+a[i]^a[i+1]) < (a[i]^a[i+1]+a[i+1]^a[i+2]))
                {
                c++;
                cout<<"\n"<<i<<" \n";
                swap(a[i],a[i+1]);
                
            }
        }

        for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
        }
        cout<<endl;
       if(c==0)break;
    }
    for(int i=0;i<n-1;i++){
        if(mx<a[i]^a[i+1])mx=a[i]^a[i+1];
    }
    cout<<mx<<endl;
    return 0;
}