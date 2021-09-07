#include<bits/stdc++.h>
using namespace std;

signed main(){
    double n,m;
    cin>>n>>m;
    n*=100;
    m*=100;
    double ans=m/(n*n)*100;
    cout<<fixed<<setprecision(3)<<ans;
}
//double 先乘再除
