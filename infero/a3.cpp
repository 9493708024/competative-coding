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
#define CSET(x)                 __builtin_popcount(x)   //count the no of digits in  a unsigned int 
#define CLOG(x)                 31 - __builtin_clz(x)
#define CLZ(x)                  __builtin_clz(x)
#define CTZ(x)                  __builtin_ctz(x)
#define FOR(i, a, b)            for(int i = (a); i < (b); ++i)
#define FORL(i, a, b)            for(ll i = (a); i < (b); ++i)
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
#define gcd(a,b)                __gcd(a,b)
#define CLR(a,b)                memset(a,b,sizeof(a))
#define nl()                    printf("\n");
#define M                       1000000007
#define gc                      getchar
#define pc                      putchar



//-------------FASTER SCANNING FUNCTIONS---------------------//


inline  int ini()
{
    int x;
    register int c;
    do 
        c = gc();
    while (c < 48 || c > 57);

    for(x = 0; c > 47 && c < 58; c = gc())
                x = (x << 1) + (x << 3) + c - 48;
     return x;
}

inline long inl(){
    long ip=gc(),ret=0;
    for(;ip<'0'||ip>'9';ip=gc());
    for(;ip>='0'&&ip<='9';
        ip=gc())ret=ret*10+ip-'0';
    return ret;
}

inline long long inll(){
        long long ip=gc(),ret=0;
        for(;ip<'0'||ip>'9';ip=gc());
        for(;ip>='0'&&ip<='9';
            ip=gc())ret=ret*10+ip-'0';
        return ret;
}

inline long long unsigned inull() {
    long long unsigned ip=gc(),ret=0;
    for(;ip<'0'||ip>'9';ip=gc());
        for(;ip>='0'&&ip<='9';ip=gc())ret=ret*10+ip-'0';
    return ret;
}

inline void ins(std::string &str)
{
    char c = '0';
    while((c = gc()) && (c != -1 && c != '\n' && c != '\r')){
        str += c;
    }
}
//------------------------END-------------------------------//








//------------------FASTER OUTPUT FUNCTIONS-----------------//

char sp='\n';

inline  void outi (int n){
    register int x = n;
    int a [20], i;
    for (i = 0; x; i++)
         a[i] = x % 10,  x /= 10;
    for (; i; i--)
        pc (48 + a[i - 1]);
    pc (32);
}


inline void outll(ll n){
    int i=21;
    char output_buffer[22];
    output_buffer[21]=sp;
    do{
        output_buffer[--i]=(n%10)+'0';
        n/=10;
    }while(n);
    do{
        pc(output_buffer[i]);
    }while(++i<22);
}


void outs( const char a[] ) { const char *p=a;    while(*p)pc(*p++);}



//--------------------END-------------------------------------//





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


inline bool IsPrime( int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  return (false);

 for( int k = 1; 36*k*k-12*k < number;++k)
  if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   return (false);
  return true;
 }


int a[504][504];
int t,n;

int main(int argc, char const *argv[])
{
    freopen("in.txt","r",stdin);/*--------------REMOVE BEFORE SUBMIITING --------------*/ 

    t=ini();
    int temp=t;
    while(t--){
        n=ini();
       bool a[n+1][n+1];

        FOR(i,1,n+1){
        FOR(j,1,n+1){
            a[i][j]=0;
        }
       }
       FOR(i,1,n+1){
            int enemy=ini();
            FOR(j,0,enemy){
                int y=ini();
                a[i][y]=1;
            }
       }
       int col[n+1];
       FILL(col,-1);
       queue<int>q;
       q.push(1);
       col[1]=1;
       bool flag=false;
       while(!q.empty()){
            int u=q.front();
            q.pop();
            FOR(i,1,n+1){
                if(a[u][i]==true && col[i]==-1){
                    col[i]=1-col[u];
                    q.push(i);
                }
                else if(a[u][i]==true && col[i]==col[u]) {
                        flag=true;
                        break;
                }
            }
            if(q.empty()){
                FOR(kl,1,n+1){
                    if(col[kl]==-1){
                        q.push(kl);
                        col[kl]=1;
                        break;
                    }
                }
            }
            if(flag==true)
                break;
       }

       if(flag==true){
            cout<<"Case "<<temp-t<<": 0 0 0";nl();
       }
       else {

            int res1=0,res2=0;
            FOR(i,1,n+1){
                if(col[i]==1)
                    res1++;
                else res2++;
            }
            cout<<"Case "<<temp-t<<": " <<1<<" "<<min(res1,res2)<<" "<<max(res1,res2);nl();
       }

      

    }
    return 0;
}
