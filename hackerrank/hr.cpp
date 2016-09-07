#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define gc getchar_unlocked
using namespace std;

void scanint(long long &x)
{
    register long long c = gc();
    x = 0;
    long long  neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}


int main() {
    int t;
    cin>>t;
    while(t>0){
        t--;
        int  n;
        cin>>n;
        vector<long long> a;long long q;
        for(int i=0;i<n;i++){
            scanint(q);
            a.push_back(q);
          
        }
        int y=0; int i,key;
    for(int j=1;j<n;j++)
    {
       
       key=a[j];
       i=j;
       while(a[i-1]>a[i] and i>0)
       {
         a[i]=a[i-1];
         a[i-1]=key;
          i--;

       }
        y=j-i+y;
    }
        cout<<y<<endl;
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
