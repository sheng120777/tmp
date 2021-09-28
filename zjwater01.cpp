#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){

   ios::sync_with_stdio(0);
   cin.tie(0);
   vector<char>a;
   string s;
   cin>>s;
   reverse(s.begin(),s.end());
   for(int i=0;i<s.length();i++){
       a.push_back(s[i]);
   }
   for(int i=0;i<3;i++){
       a.push_back('0');
   }
   cout<<"個位數: "<<a[0]<<", 十位數: "<<a[1]<<", 百位數: "<<a[2]<<endl;
}
