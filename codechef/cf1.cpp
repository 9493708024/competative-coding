            #include<bits/stdc++.h>
            using namespace std;
             #define ll long long int
            const int N = 1e5; 
            int n; 
            int t[2*N];
            bool prime[2*N];
             int sp[2*N];            
            void build() { 
              for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
         
            }
             
            void modify(int p, int value) { 
              for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
            }
             
            int query(int l, int r) {  
              int res =1;
              for(int i=l;i<=r;i++){
                   res=max(res,sp[t[i+n]]);
                }
              return res;
            }
             
            void update(int l,int r){
              for(int i=l;i<=r;i++){
                int y=t[n+i]/sp[t[n+i]];
                  modify(i,y);
              }
            }
 inline void Sieve(){
  sp[0]=1;
    sp[1]=1;
    for (ll i = 2; i < 2*N; i += 2)    
            sp[i] = 2;
    for (ll i = 3; i < 2*N; i += 2){
        if (!prime[i]){
            sp[i] = i;
            for (ll j = i; (j*i) < 2*N; j += 2){
                if (!prime[j*i])    prime[j*i] = true, sp[j*i] = i;
            }
        }
    }
}
        int main() {
          //std::ios::sync_with_stdio(false);
          freopen("-in","r",stdin);
          Sieve();
          int test;
          cin>>test;
          while(test--){
            int m;
            cin>>n>>m;
            for (int i = 0; i < n; ++i)
                scanf("%d",t+n+i);
                    build();
            for(int i=0;i<m;i++){
              int a,b,c;
              cin>>a>>b>>c;
              if(a==0){
                update(b-1,c-1);
              }
              else {
                cout<<query(b-1,c-1)<<" ";
              }
            }
            cout<<endl;
          }
        } 
 