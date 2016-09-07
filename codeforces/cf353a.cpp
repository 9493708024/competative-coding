#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long long a,b,c;
	cin>>a>>b>>c;
	unsigned long long int d=b-a;
	if((d)%c==0)cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}