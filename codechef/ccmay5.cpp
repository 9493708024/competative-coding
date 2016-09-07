#include<bits/stdc++.h>
using namespace std;
#define s(n)                    scanf("%d",&n)
#define sl(n)                   scanf("%lld",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                   scanf("%s",n)
#define sc(n)                   scanf("%c",&n)
#define PI(n)                   printf("%d \n",n)
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
#define ll                      long long int
#define ull                      unsigned long long int
#define gcd(a,b)                _gcd(a,b)
#define CLR(a,b)                memset(a,b,sizeof(a))
#define nl()                    printf("\n");
#define M                       1000000007
 
 
inline  void InInt (int &x)
{
    register int c;
    do 
        c = getchar_unlocked ();
    while (c < 48 || c > 57);
 
    for(x = 0; c > 47 && c < 58; c = getchar_unlocked ())
                x = (x << 1) + (x << 3) + c - 48;
}
 
inline  void OutInt (int n)
{
    register int x = n;
    int a [20], i;
    for (i = 0; x; i++)
         a[i] = x % 10,  x /= 10;
    for (; i; i--)
        putchar_unlocked (48 + a[i - 1]);
    putchar_unlocked (32);
}
 
 
 
inline long long int read_int(){
    char r;
    bool start=false,neg=false;
    long long int ret=0;
    while(true){
        r=getchar();
        if((r-'0'<0 || r-'0'>9) && r!='-' && !start){
            continue;
        }
        if((r-'0'<0 || r-'0'>9) && r!='-' && start){
            break;
        }
        if(start)ret*=10;
        start=true;
        if(r=='-')neg=true;
        else ret+=r-'0';
    }
    if(!neg)
        return ret;
    else
        return -ret;
}
 
 
inline void scanstr(std::string &str)
{
    char c = '0';
    while((c = getchar_unlocked()) && (c != -1 && c != '\n' && c != '\r'))
    {
        str += c;
    }
}
 
 
int amaze(vector<int>&a){
    set<int>s;
    int ans=0;
     for ( int i = 0; i < a.size(); i++ ){
        int val=0;
        for ( int j = i; j < a.size(); j++ ) {
            val^=a[j];
            cout<<val<<" ";
            if (s.find(val) == s.end()) {
                 ans += val;
                 s.insert(val);
            }
        }
        //cout<<endl;
        
    }
    return ans;
}
 
 
int main(int argc, char const *argv[])
{
    cout<<((8^4)^7)+14<<"fire"<<endl;
    freopen("input.txt","r",stdin);//dont forget to remove while submitting 
    int t;
    InInt(t);
    std::vector<int> v;
    while(t--){
        ll l,r,ans=0,i;
        l=read_int();
        r=read_int();
        for(ll i=l;i<=r; i++){
            cout<<i<<"->";
            stringstream convert; 
            convert << i;
            string s= convert.str();
            
            FOR(i,0,s.length()){
                v.PB((int)s[i]-'0');
            }
            ans+=amaze(v);
            PI(amaze(v));
            if(ans>=M)ans-=M;
            v.clear();
        }
        cout<<" ans ";
        PLL(ans);
    }
 
 
    return 0;
}
 