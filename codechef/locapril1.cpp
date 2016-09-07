#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t>0){
	t--;
	int n;
	cin>>n;
	int a[n];
	int u=0;
	for(int i=0;i<n;i++)cin>>a[i];

	int max=0;
	int prev=0,p=0;
	for(int i=2;i<n;i++){
		int j=i;
		while(1){
			if(a[j]==a[j-2]+a[j-1]){j++;u++;}
			else {

				int c=j-i+2;
				if(max<c)max=c;
				break;
			}
		}
	}
	if(u==0)cout<<1<<endl;
	else cout<<max<<endl;

}
	return 0;
}
