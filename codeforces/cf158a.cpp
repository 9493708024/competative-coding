#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen("input.in","r",stdin);
	int n,k;
	cin>>n>>k;
	int y[n],c=0;
	for(int i=0;i<n;i++){
		cin>>y[i];
		if(y[i]>0 && i<k)c++;
	}
	int s=y[k-1];
	for(int i=k;i<n;i++){
		//cout<<y[i]<<" ";
		if(s==y[i] && y[i]>0)c++;
		else break;
	}

	cout<<c<<endl;
}	