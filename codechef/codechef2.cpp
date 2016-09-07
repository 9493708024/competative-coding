#include<bits/stdc++.h>
using namespace std;

long long r(string s,long long a,long long b,long long c){
	long long n=s.length();
	
	if(n==0)return 0;
	char t=s[0];
	if(t=='A')a--;
	else if(t=='B')b--;
	else c--;
	if(a==b && b==c){
		s.erase(0,1);
		return 1+r(s,a,b,c);
	}


	if(t=='A')a++;
	else if(t=='B')b++;
	else c++;



	if(s[n-1]=='A')a--;
	else if(s[n-1]=='B')b--;
	else c--;
	if(a==b && b==c){
		s.insert(0,t);
		s.erase(n-1,1);
		return 1+r(s,a,b,c);
	}

}

int main(){
string s;
cin>>s;

	return 0;
}