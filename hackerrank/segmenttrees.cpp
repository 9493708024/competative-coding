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
#define gc                      getchar_unlocked



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
        putchar_unlocked (48 + a[i - 1]);
    putchar_unlocked (32);
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
        putchar_unlocked(output_buffer[i]);
    }while(++i<22);
}


void outs( const char a[] ) { const char *p=a;    while(*p)putchar_unlocked(*p++);}



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





class segmenttrees
{
private:
     std::vector<ll> st,A;
    ll n;
        ll right(ll p){return (p<<1)+1;}
        ll left(ll p){return p<<1;}

        void build(ll p,ll L,ll R){
            if(L==R){
                st[p]=A[L];       
            }
            else {
                build(left(p),L,(L+R)/2);
                build(right(p),(L+R)/2+1,R);
                ll p1=st[left(p)];
                ll p2=st[right(p)];
                st[p]=p1+p2;
            }
        };

        ll rmp(ll p,ll L,ll R,ll i, ll j){
                if(i>R || j<L)
                    return -1;
                if(R<=j && L>=i)
                    return st[p];           
                    ll p1=rmp(left(p),L,(L+R)/2,i,j);
                    ll p2=rmp(right(p),(L+R)/2+1,R,i,j);
                    if(p1==-1)
                        return p2;
                    if(p2==-1)
                        return p1;
                    return p1+p2;               
        };
        ll update(ll p,ll L,ll R,ll idx,ll new_value){
            ll i=idx,j=idx;
            if(i>R || j<L){
                return st[p];
            }
            if(i==L && j==R){
                A[i]=new_value;
                return st[p]=L;
            }   
            ll p1,p2;
            p1=update(left(p),L,(L+R)/2,idx,new_value);
            p2=update(right(p),(L+R)/2+1,R,idx,new_value);
            return st[p] = (A[p1] <= A[p2])? p1:p2;
        };


public:
    segmenttrees(std::vector<ll> v){
        A=v;
        n=(ll)A.size();
        st.assign(4*n,0);
        build(1,0,n-1);
    };
    ll update_point(ll idx, ll new_value) {
            return update(1, 0, n - 1, idx, new_value); 
    };
  
   ll rmp(ll i,ll j){
        return rmp(1,0,n-1,i,j);
    };

    
};

int main() {
int arr[] = { 18, 17, 13, 19, 15, 11, 20 };
vector<ll> A(arr, arr + 7);
segmenttrees st(A);
printf("RMQ(1, 3) = %lld\n", st.rmp(1, 3));
printf("RMQ(4, 6) = %lld\n", st.rmp(4, 6));
} // return 0;