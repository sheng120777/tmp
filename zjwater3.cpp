#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
  
signed main() { 
    vector<int>tt;
    for(int k=0;k<2;k++){
        string S; 
        string T[10];
        int t[10];
        getline(cin, S); 
    
        stringstream X(S); 
        int i=0;
        while (getline(X,T[i],':')){
            i++; 
        }
        for(int i=0;i<3;i++){
            t[i]=stoi(T[i]);
        }  
        t[0]=t[0]*3600;
        t[1]=t[1]*60;
        tt.push_back(t[0]+t[1]+t[2]);
    }
    if(tt[1]<tt[0]){
        tt[1]+=86400;
    }
    int z=abs(tt[0]-tt[1]);
    int a,b,c,tmp;
    a=z/3600;
    tmp=z-a*3600;
    b=tmp/60;
    c=tmp%60;
    cout<<(a<10?"0":"")<<a<<':'<<(b<10?"0":"")<<b<<':'<<(c<10?"0":"")<<c;
}
