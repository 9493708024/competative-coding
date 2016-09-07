#include<bits/stdc++.h>
using namespace std;
int count;
inline double r(){
    double x,y,x1,y1;
    cin>>x>>y>>x1>>y1;
        return (double)(((y1-y))/(x1-x));
}

int main(){
    double m1,m2,m3,m4;
    m1=r();
    m2=r();
    m3=r();
    m4=r();
    cout<<m1<<endl;
      cout<<m2<<endl;
  cout<<m3<<endl;
  cout<<m4<<endl;

    if(m1==HUGE_VAL || m2==HUGE_VAL || m3==HUGE_VAL || m4==HUGE_VAL || m1==-HUGE_VAL || m2==-HUGE_VAL || m3==-HUGE_VAL || m4==-HUGE_VAL   ){
        if(m1==0 && m2==0 && (m3==HUGE_VAL || m3==-HUGE_VAL) && (m4==HUGE_VAL || m4==-HUGE_VAL)){
            cout<<"YES";
        }
        else if(m1==0 && m3==0 && (m2==HUGE_VAL || m2==-HUGE_VAL) && (m4==HUGE_VAL || m4==-HUGE_VAL)){
            cout<<"YES";
        }
        else if(m1==0 && m4==0 && (m2==HUGE_VAL || m2==-HUGE_VAL) && (m3==HUGE_VAL || m3==-HUGE_VAL)){
            cout<<"YES";
        }
        else if(m2==0 && m3==0 && (m1==HUGE_VAL || m1==-HUGE_VAL) && (m4==HUGE_VAL || m4==-HUGE_VAL)){
            cout<<"YES";
        }
        else if(m2==0 && m4==0 && (m1==HUGE_VAL || m1==-HUGE_VAL) && (m3==HUGE_VAL || m3==-HUGE_VAL)){
            cout<<"YES";
        }
        else if(m3==0 && m4==0 && (m1==HUGE_VAL || m1==-HUGE_VAL) && (m2==HUGE_VAL || m2==-HUGE_VAL)){
            cout<<"YES";
        }
        else cout<<"NO";
    }
    else {
    if(m1==m2 && m3==m4){
            if(m1*m3==(-1))
                cout<<"YES";
            else cout<<"NO";
            }
    else if(m1==m3 && m2==m4){
           if(m1*m2==-1)cout<<"YES";
            else cout<<"NO";
    }
    else if(m1==m4 && m2==m3){
     if(m1*m2==-1)
            cout<<"YES";
     else cout<<"NO";
    }
    else cout<<"NO";
    }

}
