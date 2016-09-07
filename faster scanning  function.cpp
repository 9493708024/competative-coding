

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
#define gc                     getchar_unlocked

inline void InInt (int &x)
{
    register int c;
    do        c = getchar_unlocked ();      while (c < 48 || c > 57);
    for(x = 0; c > 47 && c < 58; c = getchar_unlocked ())   x = (x << 1) + (x << 3) + c - 48;
}
 
inline void OutInt (int n)
{
    register int x = n;
    int a [20], i;
    for (i = 0; x; i++)     a[i] = x % 10,  x /= 10;
    for (; i; i--)          putchar_unlocked (48 + a[i - 1]);
    putchar_unlocked (32);
}
................................................
long long int read_int(){
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
----------------............................
inline int readint() {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    int x = 0;
    while (isdigit(c)) {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x;
}
 
inline long long readlong() {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    long long x = 0;
    while (isdigit(c)) {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x;
}
;....................----------------------------------
string 

inline void fastRead_int(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}

inline void fastRead_string(char *str)
{
    register char c=0;
    register int i = 0;
    while (c < 33)
        c = getchar_unlocked();
    while (c > 65)
    {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }

    str[i] = '\0';
}




---------------------------------------------------
#ifdef DEBUG
     #define debug(args...)            {dbg,args; cerr<<endl;}
#else
    #define debug(args...)              // Just strip off all debug tokens
#endif


-------------------------------------------------





#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}



------------------------------------------------------


---------------------------------------------------------------------

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}





----------------------------------------------------------------------

#define size 65536
int main()
{
   
    char b[size];
    int t=0,n,k,cnt=0;
    int c,j;
    scanf("%d %d\n",&n,&k);
    while((c = fread(b,1,size,stdin))>0)
    {
               for(j=0;j<c;j++)
               {
                if(b[j]=='\n')
                {
                              if(t%k==0)cnt++;
                              t = 0;
                }
                else
                {
                              t = (t*10) + (b[j]-'0');               
                }             
               }
     }
    printf("%d\n",cnt);   
    return 0;
}



---------------------------------------------------
int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}




 string



------------------------------------------------------

We can use getchar_unlocked for fast reading of integers from stdin by manipulating the characters like:

int scan_d()
{
    int ip = getchar_unlocked(), ret = 0, flag = 1;

    for(; ip < '0' || ip > '9'; ip = getchar_unlocked())
    {
        if(ip == '-')
        {
            flag = -1;
            ip = getchar_unlocked();
            break;
        }
    }

    for(; ip >= '0'&& ip <= '9'; ip = getchar_unlocked())
        ret = ret * 10 + ip - '0';
    return flag * ret;
}  
 
........................................................


Not sure if my benchmarks are correct at all.. It is my first time testing speed really..

Anyway, here goes:

http://ideone.com/KruGD2

#include <cstdio>
#include<iostream>
#include <sstream>
#include <chrono>

std::chrono::time_point<std::chrono::steady_clock> hClock()
{
    return std::chrono::steady_clock::now();
}

std::uint32_t TimeDuration(std::chrono::time_point<std::chrono::steady_clock> Time)
{
    return std::chrono::duration_cast<std::chrono::nanoseconds>(hClock() - Time).count();
}


void Benchmark(const char* Name, std::string &str, void(*func)(std::string &str))
{
    auto time = hClock();
    for (int i = 0; i < 100; ++i)
    {
        func(str);
        str.clear();
    }
    std::cout<<Name<<" took: "<<TimeDuration(time) / 100<<" nano-seconds.\n";
}

void unlocked_bench(std::string &str)
{
    char c = '0';
    while((c = getchar_unlocked()) && (c != -1 && c != '\n' && c != '\r'))
    {
        str += c;
    }
}

void getchar_bench(std::string &str)
{
    char c = '0';
    while((c = getchar())  && (c != -1 && c != '\n' && c != '\r'))
    {
        str += c;
    }
}

void getline_bench(std::string &str)
{
    std::cin.getline(&str[0], str.size());
}

void scanf_bench(std::string &str)
{
    scanf("%[^\n]100s", &str[0]);
}

void fgets_bench(std::string &str)
{
    fgets(&str[0], str.size(), stdin);
}

void cinread_bench(std::string &str)
{
    std::cin.read(&str[0], str.size());
}

int main()
{
    std::string str;
    str.reserve(100);

    Benchmark("getchar_unlocked", str, unlocked_bench);
    Benchmark("getchar", str, getchar_bench);
    Benchmark("getline", str, getline_bench);
    Benchmark("scanf", str, scanf_bench);
    Benchmark("fgets", str, fgets_bench);
    Benchmark("cinread", str, cinread_bench);

    return 0;
}

Input:

Hello There
Hello There
Hello There
Hello There
Hello There
Hello There

Output:

getchar_unlocked took: 436 nano-seconds.
getchar took: 330 nano-seconds.
getline took: 619 nano-seconds.
scanf took: 522 nano-seconds.
fgets took: 44 nano-seconds.
cinread took: 67 nano-seconds.

s






















time function

   clock_t c0, c1;
    time_t t0, t1;
    t0 = time(NULL);
    c0 = clock();
    t1 = time(NULL);
    c1 = clock();
    printf("wall clock time: %ld\n", (long) (t1 - t0));
    printf("CPU time: %f\n", (float) (c1 - c0) / CLOCKS_PER_SEC);











    ...........................................................
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
class FastInput {
public:
    FastInput() {
        m_dataOffset = 0;
        m_dataSize = 0;
        m_v = 0x80000000;
    }
    uint32_t ReadNext() {
        if (m_dataOffset == m_dataSize) {
            int r = read(0, m_buffer, sizeof(m_buffer));
            if (r <= 0) return m_v;
            m_dataOffset = 0;
            m_dataSize = 0;
            int i = 0;
            if (m_buffer[0] < '0') {
                if (m_v != 0x80000000) {
                    m_data[m_dataSize++] = m_v;
                    m_v = 0x80000000;
                }
                for (; (i < r) && (m_buffer[i] < '0'); ++i);
            }
            for (; i < r;) {
                if (m_buffer[i] >= '0') {
                    m_v = m_v * 10 + m_buffer[i] - 48;
                    ++i;
                } else {
                    m_data[m_dataSize++] = m_v;
                    m_v = 0x80000000;
                    for (i = i + 1; (i < r) && (m_buffer[i] < '0'); ++i);
                }
            }
        }
        return m_data[m_dataOffset++];
    }
public:
    uint8_t m_buffer[32768];
    uint32_t m_data[16384];
    size_t m_dataOffset, m_dataSize;
    uint32_t m_v;
};
class FastOutput {
public:
    FastOutput() {
        m_dataOffset = 0;
    }
    ~FastOutput() {
    }
    void Flush() {
        if (m_dataOffset) {
            if (write(1, m_data, m_dataOffset));
            m_dataOffset = 0;
        }
    }
    void PrintUint(uint32_t v, char d) {
        if (m_dataOffset + 11 > sizeof(m_data)) Flush();
        if (v < 100000) {
            if (v < 1000) {
                if (v < 10) {
                    m_data[m_dataOffset + 0] = v + 48;
                    m_dataOffset += 1;
                } else if (v < 100) {
                    m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 0] = v + 48;
                    m_dataOffset += 2;
                } else {
                    m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 0] = v + 48;
                    m_dataOffset += 3;
                }
            } else {
                if (v < 10000) {
                    m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 0] = v + 48;
                    m_dataOffset += 4;
                } else {
                    m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 0] = v + 48;
                    m_dataOffset += 5;
                }
            }
        } else {
            if (v < 100000000) {
                if (v < 1000000) {
                    m_data[m_dataOffset + 5] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 0] = v + 48;
                    m_dataOffset += 6;
                } else if (v < 10000000) {
                    m_data[m_dataOffset + 6] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 5] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 0] = v + 48;
                    m_dataOffset += 7;
                } else {
                    m_data[m_dataOffset + 7] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 6] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 5] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 0] = v + 48;
                    m_dataOffset += 8;
                }
            } else {
                if (v < 1000000000) {
                    m_data[m_dataOffset + 8] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 7] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 6] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 5] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 0] = v + 48;
                    m_dataOffset += 9;
                } else {
                    m_data[m_dataOffset + 9] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 8] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 7] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 6] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 5] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 4] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 3] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 2] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 1] = v - v / 10 * 10 + 48;
                    v /= 10;
                    m_data[m_dataOffset + 0] = v + 48;
                    m_dataOffset += 10;
                }
            }
        }
        m_data[m_dataOffset++] = d;
    }
    void PrintChar(char d) {
        if (m_dataOffset + 1 > sizeof(m_data)) Flush();
        m_data[m_dataOffset++] = d;
    }
    void ReplaceChar(int offset, char d) {
        m_data[m_dataOffset + offset] = d;
    }
public:
    uint8_t m_data[32768];
    size_t m_dataOffset;
};




-------------------..............................
      inline void read(int &x){

        x=0;
        register char c=gc();
        for(;c<'0' || c>'9';c=gc());
         for(;c>='0' && c<='9';c=gc())
          x=(x<<3)+(x<<1)+(c-'0');
      }
      inline void write(int x){

         register char buffor[35];
         register int i=0;
         do{
               buffor[i++]=(x%10)+'0';
               x/=10;
            } while(x);
           i--;
            while(i>=0) putchar_unlocked(buffor[i--]);
            putchar_unlocked('\n');
       }
......................................................