#include<bits/stdc++.h>
using namespace std;
vector< pair<long long ,long long> >p,raj;

inline double dist(double x,double y,double x1,double y1){
    return sqrt((x1-x)*(x1-x) + (y1-y)*(y1-y));
}
inline double r(double cxx,double cyy){
    double ri[4];
    for(int i=0;i<4;i++){
        ri[i]=dist((double)raj[i].first,(double)raj[i].second,cxx,cyy);
      //  cout<<ri[i]<<endl;
    }
    if(ri[0]==ri[1] && ri[1]==ri[2] && ri[2]==ri[3])
        return true;
    else return false;
}


inline bool rajchk(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(raj[i]==raj[j] && i!=j)
                return false;
        }
    }
    return true;
}
inline bool ret(){
    pair<long long,long long>cur=p[0],res=p[1],re1,re2;
    int ini=-1;
    for(int i=2;i<8;i++){
        if(cur==p[i])
            ini=i;
    }
    if(ini==-1)
        return false;
    if(ini%2!=0)
        ini--;
    else ini++;
    if(p[ini]==res)
        return false;
    else return true;
}
int main(){
pair<long long,long long >re;
long long x,y;
int count1=0,count2=0;
for(int i=0;i<8;i++){
    cin>>x>>y;
    if(x==0)
        count1++;
    if(y==0)
        count2++;
    re = make_pair(x,y);
    p.push_back(re);
}
if(count1>4 || count2>4)
    cout<<"NO";
else {
bool yu=true;
for(int i=0;i<8;i++){
    int r=0;
    for(int j=0;j<8;j++){
        if(p[i]==p[j] && i!=j){
            r++;
            if(i>j)raj.push_back(p[i]);
            break;
        }
    }
    if(r==0){
        yu=false;
        break;
    }
}

if(yu==true){
    if(ret()==false)
            yu=false;
}
if(yu==true){
    long long int cx=0,cy=0;
    for(int i=0;i<4;i++){
        cx+=raj[i].first;
        cy+=raj[i].second;
        //cout<<raj[i].first<<" "<<raj[i].second<<endl;
    }
    double cxx=(double)cx/4;
    double cyy=(double)cy/4;
    //cout<<r(cxx,cyy);
    if(r(cxx,cyy)==true){
        if(raj[0].first-raj[1].first==0  || raj[0].second-raj[1].second==0){
                if(rajchk()==true)
                    cout<<"YES";
                else cout<<"NO";
        }
        else cout<<"NO";

    }
    else cout<<"NO";
}
else cout<<"NO";
}
}

