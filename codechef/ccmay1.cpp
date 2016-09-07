    #include<bits/stdc++.h>
	//#include <boost/multiprecision/cpp_int.hpp>
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
    #define ll 						long long int
    #define nl()						printf("\n");
    #define ull						unsigned long long int

    int main(int argc, char const *argv[])
    {
        cout<<"das";
    	//freopen("input.txt","r",stdin);//dont forget to remove while submitting
    	ull w,l;
    	int n;
    	s(n);
    	cin>>(w);
    	cin>>(l);
    	ll h[n],r[n];
    	ull t=0,c=0,sumr=0,sumh=0;
    	FOR(i,0,n){
    		sl(h[i]);
    		if(h[i]>=l){c=c+h[i];}
    		sl(r[i]);
    		sumr+=r[i];
    		sumh+=h[i];
    	}
    	ull reader=n*l;
    	if(c>=w){PI(0);}
    	else if(w>reader && w>1000000000){
    		cout<<(w-sumh)/sumr<<endl;
    	}
    	else {
    		//w=w-c;
    		ull i=0;
    		while(1){
    			///cout<<w<<"\n";

    			ull g,y;
    			i=(w-c)/sumr;
    			c=0;
    			for(int j=0;j<n;j++){
    				y=h[j]+r[j]*i;
    				if(y>=l)c+=y;
    				//cout<<c<<" ";
    			}
    			//cout<<c<<"\n";
    			if(w<=c){
    				cout<<i<<endl;
    				break;
    			}
    			else {
    				int u=i+1;
    				for(;;){
    					ull e=0;
    					ull k;
    					FOR(t,0,n){
    						k=h[t]+r[t]*u;
    						if(k>=l)e=e+k;
    					}
    					if(e<w)u++;
    					else break;
    				}
    				PI(u);
    				break;
    			}
    		}
    	}

    	return 0;
    }
