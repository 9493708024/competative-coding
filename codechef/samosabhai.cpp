#include<iostream>
#include<math.h>

using namespace std;



int main(){

	int t;
	cin>>t;

	while(t>0){
		t--;
		long long  n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
long long c=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				long long r= a[j]-a[i];
				if(r<0)r=-r;
				c=c+pow(r,k);
			}
		}
		 long long z=1000000007;
		c=(2*c)%z;
		cout<<c<<endl;

	}
}