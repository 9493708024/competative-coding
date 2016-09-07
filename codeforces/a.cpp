#include<bits/stdc++.h>

std::vector<int> v;
int n;
using namespace std;
inline int r(int t){
	int count=0;
	if(t>=v[n-1])
		return n;
	else if(t<v[0])
		return 0;



	int begin=0,end=n-1,mid;
	
	while(end-begin>1){
		mid=(begin+end)/2;
		if(v[mid] < t)
			begin=mid+1;
		else if(v[mid] > t)
			end=mid;
		else 
			return mid+1;
	}
	return begin+1;
}

int main(int argc, char const *argv[])
{
	freopen("in.txt","r",stdin);
	 std::ios::sync_with_stdio(false);
	int in;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>in;
		v.push_back(in);
	}
	sort(v.begin(),v.end());
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>in;
		cout<<r(in)<<"\n";
	}
	return 0;
		
}