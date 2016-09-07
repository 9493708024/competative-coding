#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int n=s.length();
int prev=0,p=0;
	for(int i=0;i<n;i++){
		if(s[i]=='(')prev=i;
		else if(s[i]==')'){
			p=i;
			break;
		}

	}

	for(int i=prev+1;i<p;i++){
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}