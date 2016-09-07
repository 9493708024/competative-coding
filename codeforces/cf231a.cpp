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
	int n;
	s(n);
	int a;
	int p4=0,p3=0,p2=0,p1=0;	
	
	FOR(i,0,n){
		s(a);
		if(a==1)p1++;
		else if(a==2)p2++;
		else if(a==3)p3++;
		else p4++;
	}

	int ans=p4;
	ans+=p3;
	p1=p1-p3;
	if(p1<0){
		if(p2%2==0){
			cout<<ans+p2/2;
		}
		else cout<<ans+p2/2+1;
	}
	else {

		if(p2%2==0){
			ans+=p1/4;
			if(p1%4!=0)ans++;
			cout<<ans+p2/2;
		}
		else{
				p1=p1-2;
				if(p1<0)p1=0;
				ans+=p1/4;
				if(p1%4!=0)ans++;
				cout<<ans+p2/2+1;
		}
	}
    return 0;
}

