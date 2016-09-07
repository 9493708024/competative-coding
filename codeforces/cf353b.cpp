#include<bits/stdc++.h>
using namespace std;
#define  ll long long 

 double dis(ll a,ll b , ll c ,ll d){
	return sqrt((ll)(a-c)*(a-c)+(ll)(b-d)*(b-d));
}



int main(int argc, char const *argv[])
{
     freopen("input.txt","r",stdin);//dont forget to remove while submitting 
     ll ax,ay,bx,by,cx,cy;
     cin>>ax>>ay>>bx>>by>>cx>>cy;
     int n;
     cin>>n;
     ll x,y;
     double M=1e11+10;
     double tdis=0,a[n],b[n],mina=M,minb1=M,minb2=M,mxa=-M,mxb=-M,mina1=M;
     int  minai,minbi;
     for(int i=0;i<n;i++){
     	cin>>x>>y;
     	double dd=dis(cx,cy,x,y);
     	tdis+=dd;
     	a[i]=dis(ax,ay,x,y)-dd;
     	b[i]=dis(bx,by,x,y)-dd;
     	if(mina>a[i]){
     		mina=a[i];
     		minai=i;
     	}
     	mxa=max(a[i],mxa);
     	mxb=max(b[i],mxb);
     	if(b[i]<minb1){
     		minbi=i;
     		minb1=b[i];
     	}
     }
     tdis*=2;
     b[minbi]=M;
     a[minai]=M;
     for(int i=0;i<n;i++){
     	minb2=min(minb2,b[i]);
     	mina1=min(mina1,a[i]);
     }


    // cout<<" "<<mina1<<" "<<minb2<<endl;
     if(mxa<minb1){
     	printf("%.12lf\n",tdis+mina);
     }
     else if(mxb<mina){
     	printf("%.12lf\n",tdis+minb1);
     }
     else {
     	if(minai==minbi){
     		if((mina+minb2)<(mina1+minb1))
      			printf("%.12lf\n",(tdis+mina+minb2));
      		else 
      			printf("%.12lf\n",(tdis+mina1+minb1));

     	}
     	else {
     		else printf("%.12lf\n",(tdis+mina+minb1));
     	}
     }

    return 0;
}
