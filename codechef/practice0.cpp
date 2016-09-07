#include <cmath>
#define EPS 1e-7
#include<iostream>
using namespace std;
typedef long long LL;
bool IsPrimeSlow (LL x)
{
  if(x<=1) return false;
  if(x<=3) return true;
  if (!(x%2) || !(x%3)) return false;
  LL s=(LL)(sqrt((double)(x))+EPS);
  for(LL i=5;i<=s;i+=6)
  {
    if (!(x%i) || !(x%(i+2))) return false;
  }
  return true;
}

int main(int argc, char const *argv[])
{

  int t;
  cin>>t;
  while(t--)
{    LL a,b;
    cin>>a>>b;
    for(LL i=a;i<=b;i++){
        if(IsPrimeSlow(i)){
          cout<<i<<"\n";
        }
    }

}
    return 0;
}  