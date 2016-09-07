#include<bits/stdc++.h>
using namespace std;
#define s(n)                    scanf("%d",&n)
#define sl(n)                   scanf("%I64d",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                   scanf("%s",n)
#define sc(n)                   scanf("%c",&n)
#define PI(n)                   printf("%d ",n)
#define PLL(n)                  printf("%I64d\n",n)
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
#define ll                      long long int
#define ull                      unsigned long long int
#define gcd(a,b)                _gcd(a,b)
#define CLR(a,b)                memset(a,b,sizeof(a))
#define nl()                    printf("\n");
#define M                       1000000007
#define gc                      getchar_unlocked
 


ll pow(ll a, ll b, ll mod)
{
    ll x=1, y=a;
    while(b > 0)
    {
        if(b&1)
        {
            x *= y;
            if(x > mod) x %= mod;
        }
        b /= 2;
        y *= y;
        if(y > mod) y %= mod;
    }
    return x;
}



int main(int argc, char const *argv[])
{
    freopen("input.txt","r",stdin);//dont forget to remove while submitting 
    
    
    return 0;
}

