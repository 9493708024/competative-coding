#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	string s;
	for(int i=0;i<=370;i++){
		string str;
		stringstream ss;
		ss << i;
		str = ss.str();
		s+=str;
	}
	int n;
	cin>>n;
	cout<<s[n]<<endl;
}