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
#define gc                      getchar_unlocked
#define ll                      long long int
#define gcd(a,b)                _gcd(a,b)
#define CLR(a,b)                memset(a,b,sizeof(a))
#define nl()                    printf("\n");
#define M                       1000000007
 
inline  void InInt (int &x)
{
    register int c;
    do        c = getchar_unlocked ();      while (c < 48 || c > 57);
    for(x = 0; c > 47 && c < 58; c = getchar_unlocked ())   x = (x << 1) + (x << 3) + c - 48;
}
 
inline  void OutInt (int n)
{
    register int x = n;
    int a [20], i;
    for (i = 0; x; i++)     a[i] = x % 10,  x /= 10;
    for (; i; i--)          putchar_unlocked (48 + a[i - 1]);
    putchar_unlocked (32);
}
 
 
 
inline long long int read_ll(){
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
 
 
inline void scans(std::string &str)
{
    char c = '0';
    while((c = getchar_unlocked()) && (c != -1 && c != '\n' && c != '\r'))
    {
        str += c;
    }
}
int i=2;
 
int main(int argc, char const *argv[])
{
freopen("input.txt","r",stdin);
ll fib[45];
fib[0]=1;
fib[1]=2;
while(i<45){
 
    fib[i]=fib[i-1]+fib[i-2];
    i++;
}
 
int t;
InInt(t);
while(t--){
    ll x;
    ll count=0;
    ll count1=0;
    int k;
    x=read_ll();
    InInt(k);
    int a[k]={};
    //FOR(j,0,k)a[j]=1;
    ll sum=0;
    FOR(j,0,k){
        sum+=fib[a[j]];
    }
    //cout<<"sum-";
    //PLL(sum);
    if(sum>x)PI(0);
    else if(sum==x)PI(1);
    else if(x<=100){
        int x1=x/2;
        int x2=x-x1;
        int k1=k/2;
        int k2=k-k1;
        int y=0;
            while(1){
                a[0]++;
                FOR(l,0,k-1){
                    
                    if(a[l+1]>a[l]){
                        a[l]=a[l+1];
                    } 
                    if(fib[a[l]]==x1){
                        a[l]=0;
                        a[l+1]++;
                    }
                    if(a[l]==i-1){
                        a[l]=0;
                        a[l+1]++;
                    }
                   // cout<<(a[l])<<" ";
    
                }
                if(a[k1-2]==i-1){a[k1-1]++;if(a[k1-1]==i-1)y++;}
                //cout<<a[k-1]<<"\n";
                sum=0;
                int ut=0;
                if(y!=0)break;
                else if(fib[a[k1-1]]>x)break;
               FOR(j,0,k){
                if(fib[a[j]]>x1 || sum+fib[a[j]] >x1){ut++;break;}
                else sum+=fib[a[j]];
                if(sum>x1){ut++;break;}
 
              } 
              if(sum==x1 && ut==0){
                //cout<<"sum-";PLL(sum);
                int test=0;
                FOR(kl,1,k1){
                    if(a[kl]>a[kl-1]){
                        test++;
                        break;
                    }
                }
                if(test==0){
                    count=(count+1);
                    if(count>=M)count-=M;
                }
              }
 
 
            }   
            int  a[k]={};
            y=0;
            while(1){
                a[0]++;
                FOR(l,0,k-1){
                    
                    if(a[l+1]>a[l]){
                        a[l]=a[l+1];
                    } 
                    if(fib[a[l]]==x2){
                        a[l]=0;
                        a[l+1]++;
                    }
                    if(a[l]==i-1){
                        a[l]=0;
                        a[l+1]++;
                    }
                   // cout<<(a[l])<<" ";
    
                }
                if(a[k2-2]==i-1){a[k2-1]++;if(a[k2-1]==i-1)y++;}
                //cout<<a[k-1]<<"\n";
                sum=0;
                int ut=0;
                if(y!=0)break;
                else if(fib[a[k2-1]]>x)break;
               FOR(j,0,k){
                if(fib[a[j]]>x2 || sum+fib[a[j]] >x2){ut++;break;}
                else sum+=fib[a[j]];
                if(sum>x2){ut++;break;}
 
              } 
              if(sum==x2 && ut==0){
                //cout<<"sum-";PLL(sum);
                int test=0;
                FOR(kl,1,k1){
                    if(a[kl]>a[kl-1]){
                        test++;
                        break;
                    }
                }
                if(test==0){
                    count1=(count1+1);
                    if(count1>=M)count1-=M;
                }
              }
 
 
            }   
 


            cout<<(count)+(count1)<<"\n";


        
    }
    else {
            int y=0;
            while(1){
                a[0]++;
                FOR(l,0,k-1){
                    
                    if(a[l+1]>a[l]){
                        a[l]=a[l+1];
                    } 
                    if(fib[a[l]]==x){
                        a[l]=0;
                        a[l+1]++;
                    }
                    if(a[l]==i-1){
                        a[l]=0;
                        a[l+1]++;
                    }
                   // cout<<(a[l])<<" ";
    
                }
                if(a[k-2]==i-1){a[k-1]++;if(a[k-1]==i-1)y++;}
                //cout<<a[k-1]<<"\n";
                sum=0;
                int ut=0;
                if(y!=0)break;
                else if(fib[a[k-1]]>x)break;
               FOR(j,0,k){
                if(fib[a[j]]>x || sum+fib[a[j]] >x){ut++;break;}
                else sum+=fib[a[j]];
                if(sum>x){ut++;break;}
 
              } 
              if(sum==x && ut==0){
                //cout<<"sum-";PLL(sum);
                int test=0;
                FOR(kl,1,k){
                    if(a[kl]>a[kl-1]){
                        test++;
                        break;
                    }
                }
                if(test==0){
                    count=(count+1);
                    if(count>=M)count-=M;
                }
              }
 
 
            }   
 
            cout<<(count)<<"\n";
    }
 
 
}
 
 
 
    return 0;
}
 