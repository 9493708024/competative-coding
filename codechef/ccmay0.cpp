#include<bits/stdc++.h>
using namespace std;
#define s(n)                    scanf("%d",&n)
#define sl(n)                   scanf("%lld",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                   scanf("%s",n)
#define sc(n)                   scanf("%c",&n)
#define PI(n)                   printf("%d\n",n)
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
#define gc                     getchar
#define ll 						long long int


inline void InInt (int &x)
{
	
    register int c;
    do        c = getchar ();      while (c < 48 || c > 57);
    for(x = 0; c > 47 && c < 58; c = getchar ())   x = (x << 1) + (x << 3) + c - 48;
}
 
inline void OutInt (int n)
{
    register int x = n;
    int a [20], i;
    for (i = 0; x; i++)     a[i] = x % 10,  x /= 10;
    for (; i; i--)          putchar(48 + a[i - 1]);
    putchar (32);
}







int main(int argc, char const *argv[])
{
	int t;
	InInt(t);
	while(t>0){
		t--;
		ll ans=0;
		int n;
		string origin;
		InInt(n);
		cin>>(origin);

		FOR(i,0,n){
			string s;
			cin>>(s);
			if(s=="CONTEST_WON"){
				int r;
				InInt(r);
				if(r<20){
					ans+=300+20-r;
				}
				else ans+=300;
			}	
			else if(s=="TOP_CONTRIBUTOR") {
				ans+=300;
			}
			else if(s=="BUG_FOUND"){
				int r;
				InInt(r);
				ans+=r;
			}
			else ans+=50;
		}
		int er;
		if(origin=="INDIAN"){
			 er = (ans-ans%200)/200;
		}
		else  er = (ans-ans%400)/400;
		PI(er);
	}
	return 0;
}