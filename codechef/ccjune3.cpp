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

char sp;

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




inline bool IsPrime( int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  return (false);

 for( int k = 1; 36*k*k-12*k < number;++k)
  if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   return (false);
  return true;
 }


/*

   2                                           25
   3                                          125
   4                                          625
   5                                         3125
   6                                        15625
   7                                        78125
   8                                       390625
   9                                      1953125
  10                                      9765625
  11                                     48828125
  12                                    244140625
  13                                   1220703125
  14                                   6103515625
  15                                  30517578125
  16                                 152587890625

*/


inline ull po(ull k){
    ull ret=1;
    FOR(i,0,k){
        ret*=5;
    }
    return ret;
} 


map<ull,ull>m;
inline ull r(ull k){
    //cout<<k<<endl;
    ull res=0;
    if(k<=5){
            return (k-1)*2; 
        }
    else { 
        ull r1=0;
        ull ret=1;
        FOR(i,1,19){
            ret*=5;
           // cout<<ret;nl();
            if(((ull)1+ret) > k){
                r1=1+po(i-1);
                break;
            }
            else if(((ull)1+ret)== k){
                return m[1+po(i)];
            }   
         }
         res+=(r(k-r1+(ull)1)+m[r1]);
         return res;
           
    }

}

int main(int argc, char const *argv[])
{

   
    m[1]=0;
    ull ret=1;
    ull ret1=1;
    FOR(i,1,19){
        ret*=5;
        ret1*=10;
        m[(unsigned long long)1+ret]=2*ret1;
        //cout<<1+pow(5,i)<<"-"<<m[1+pow(5,i)];nl();
    }
    freopen("-in","r",stdin);/*--------------REMOVE BEFORE SUBMIITING --------------*/ 
    ll t;
    t=inll();
    while(t--){
       
        ull k;
        k=inull();
        int c=0;
        //
        //cout<<k<<"-";
        cout<<r(k);
        nl();

    }    
    return 0;
}

