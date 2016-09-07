#include<bits/stdc++.h>
using namespace std;

int  main(){
	int t;
	cin>>t;
	while(t>0){
		t--;
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int b[k];
		for(int i=0;i<k;i++)cin>>b[i];
		int count=0;
		for(int i=0;i<n;i++){
			int j=i+1;
			int r=0;
			while(1){
				if(a[j]-a[j-1]==b[r]){
					j++;
					r++;
				}
				else break;
			}
			if(r==k-1)count++;
		}

		cout<<count<<endl;
	}
}