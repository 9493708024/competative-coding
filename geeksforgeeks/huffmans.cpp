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


inline  void ini(int &x)
{
    register int c;
    do 
        c = gc();
    while (c < 48 || c > 57);

    for(x = 0; c > 47 && c < 58; c = gc())
                x = (x << 1) + (x << 3) + c - 48;
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
    while((c = gc()) && (c != -1 && c != '\n' && c != '\r'))
    {
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





struct H
{   
    char data;
    int fre;
        struct node{
            int data;
            node*next;
            H*hp;
        };
    node*right;
    node*left;
};
struct node
{
    int data;
    node*next;
    H*hp;
};



void sortedinsert(node* Q,int data,H* hp){
    node*t;
    if(Q==NULL){
        t->data=data;
        t->next=NULL;
        t->hp=hp;
    }   

    else {
        t=Q;
        if(data <= t->data){
            node*temp;
            temp->data=data;
            temp->next=Q;
            temp->hp=hp;
            Q=temp;
        }
        else {
            int u=0;
            node*p;
            while(t->next!=NULL){
                p=t;
                if( data >= t->data && data < t->next->data){
                    node*temp;
                    temp->data=data;
                    temp->next=t->next;
                    t->next=temp;
                    temp->hp=hp;
                    u++;
                    break;

                }
            }
            if(u==0){
                 node*temp;
                 temp->data=data;
                 temp->next=NULL;
                 temp->hp=hp;
                 p->next=temp;  
            }

        }

    }
    return;

}







void huffman(char a[],int f[],int size){

    node* Q;
    Q=NULL;
    FOR(i,0,size){
        H*r=new H;
        r->data=a[i];
        r->fre=f[i];
        r->right=NULL;
        r->left=NULL;
        H*t=r;
        sortedinsert(Q,f[i],t);
    }


    do {
        node*q;
        q=Q->next->next;
        node*f1=Q;
        node*f2=Q->next;
        Q=q;
        H*r=new H;
        r->data=-1;
        r->fre=f1->data+f2->data;
        r->right=NULL;
        r->left=NULL;
        H*t=r;
        sortedinsert(Q,f1->data+f2->data,t);

    }while(Q->next!=NULL);

    
    

}









int main(int argc, char const *argv[])
{
    freopen("-in","r",stdin);/*--------------REMOVE BEFORE SUBMIITING --------------*/ 
            

    return 0;
}

