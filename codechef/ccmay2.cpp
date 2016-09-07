    #include<bits/stdc++.h>
    using namespace std;
    #define s(n)                    scanf("%d",&n)
    #define sl(n)                   scanf("%lld",&n)
    #define sf(n)                   scanf("%lf",&n)
    #define ss(n)                   scanf("%s",n)
    #define sc(n)                   scanf("%c",&n)
    #define PI(n)                   printf("%d ",n)
    #define PLL(n)                  printf("%lld\n",n)
    #define PF(x)                   printf("x")
    #define CSET(x)                 __builtin_popcount(x)
    #define CLOG(x)                 31 - __builtin_clz(x)
    #define CLZ(x)                  __builtin_clz(x)
    #define CTZ(x)                  __builtin_ctz(x)
    #define FOR(i, a, b)            for(int i = (a); i < (b); ++i)
    #define RFOR(i, b, a)           for(int i = (b) - 1; i >= (a); --i)
    #define REP(i, N)               FOR(i, 0, N)
    #define RREP(i, N)              RFOR(i, N, 0)
    #define FILL(A,value)            memset(A,value,sizeof(A))
    #define ALL(V)                  V.begin(), V.end()
    #define SZ(V)                   (int)V.size()
    #define PB                      push_back
    #define MP                      make_pair
    #define Pi                      3.14159265358979
    #define pin(n)                  printf("%d\n",n)
    #define si(n)                   scanf("%d",&n)
    #define gc                     getchar_unlocked
    #define ll                      long long int 
    #define M                       1000000007
     
    void InInt (int &x)
    {
        register int c;
        do        c = getchar_unlocked ();      while (c < 48 || c > 57);
        for(x = 0; c > 47 && c < 58; c = getchar_unlocked ())   x = (x << 1) + (x << 3) + c - 48;
    }
     
    void OutInt (int n)
    {
        register int x = n;
        int a [20], i;
        for (i = 0; x; i++)     a[i] = x % 10,  x /= 10;
        for (; i; i--)          putchar_unlocked (48 + a[i - 1]);
        putchar_unlocked (32);
    }

     
     
    int main(){
         freopen("input.txt","r",stdin);
        int t;
        InInt(t);
     
        while(t>0){
            t--;
            int n,m,s;
            InInt(n);
            InInt(m);
            InInt(s);
            ll d[n][m+1];
            int passes[m];
            s--;
            FOR(i,0,m){ 
                InInt(passes[i]);
            }
            FILL(d,0);
            d[s][0]=1;
            FOR(i,0,m){
                FOR(j,0,n){
                    //cout<<j-passes[i]+1<<"<->"<<j+passes[i]+1<<endl;
                    if(j-passes[i]>=0){
                        d[j-passes[i]][i+1]+=d[j][i];
                        if(d[j-passes[i]][i+1]>=M){
                            d[j-passes[i]][i+1]-=M;
                        }
                    }
                    if(j+passes[i]<=n-1){
                        d[j+passes[i]][i+1]+=d[j][i];
                        if(d[j+passes[i]][i+1]>=M){
                            d[j+passes[i]][i+1]-=M;
                        }
                    }
                }
                /*FOR(j,0,m+1){
                    FOR(i,0,n){
                        cout<<d[i][j]<<" ";
                    }
                    cout<<endl;
                }
                cout<<"\n\n";*/
            }
            FOR(i,0,n){
                cout<<d[i][m]<<" ";
            }
            cout<<endl;

        }

            
        return 0;
     
    } 