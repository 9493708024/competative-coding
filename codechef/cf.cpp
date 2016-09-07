#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long t=n%7;
	long long h=(n-t)/7;
	if(t==6)cout<<2*h+1<<" "<<2*h+2;
	else if(t==5)cout<<2*h<<" "<<2*h+2;
	else if(t==4)cout<<2*h<<" "<<2*h+2;
	else if(t==3)cout<<2*h<<" "<<2*h+2;
	else if(t==2)cout<<2*h<<" "<<2*h+2;
	else if(t==1)cout<<2*h<<" "<<2*h+1;
	else cout<<2*h<<" "<<2*h;
	cout<<endl;


}