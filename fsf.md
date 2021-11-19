```cpp
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10005
#define mod 100003


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    map<char,int>mp;
    string s="GHIJABCOPQRSTUDEFVWXYZKLMNghijklabpqrstcdefmnxyzouvw ,(:)'\".-!?[]{}#%&*0123456789";
    //length=81
    for(int i=0;i<s.length();i++){
        mp[s[i]]=i;
    }
    string input_s;
    getline(cin,input_s);
    int n=mp[input_s[input_s.length()-1]];
    for(int i=0;i<input_s.length();i++){
        if(mp[input_s[i]]+n>80){
            cout<<s[mp[input_s[i]]-81+n];
        }
        else{
            cout<<s[mp[input_s[i]]+n];
        }
    }
}
```

```cpp
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10005
#define mod 100003


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    map<char,int>mp;
    string s="GHIJABCOPQRSTUDEFVWXYZKLMNghijklabpqrstcdefmnxyzouvw ,(:)'\".-!?[]{}#%&*0123456789";
    for(int i=0;i<s.length();i++){
        mp[s[i]]=i;
    }
    string input_s;
    getline(cin,input_s);
    for(int i=0;i<input_s.length();i++){
        if(mp[input_s[i]]+7>80){
            cout<<s[mp[input_s[i]]+7-81];
        }
        else{
            cout<<s[mp[input_s[i]]+7];
        }
    }
}
```

```cpp
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10000005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>ans_vec;
    for(int y=0;y<=n;y++){
        string s;
        getline(cin,s);
        stringstream S(s);
        string k;
        int i=0;
        int ans=0;
        vector<string>vec;
        while(getline(S,k,',')){
            vec.push_back(k);
            i++;
        }
        for(int i=0;i<vec.size();i++){
            ans+=abs(stoi(vec[i])-2);
        }
        ans_vec.push_back(ans);
    }
    for(int i=1;i<ans_vec.size();i++){
        cout<<ans_vec[i]<<endl;
    }
}
```

```cpp
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10000005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin,s);
    int k=1;
    while(k<=s.length()){
        s[k]='*';
        k+=2;
    }
    cout<<s;
}
```

```cpp
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10000005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin,s);
    string k;
    vector<string>vec;
    int i=0;
    stringstream S(s);
    int ans=0;
    while(getline(S,k,',')){
        vec.push_back(k);
        i++;
    }
    for(int i=0;i<vec.size();i++){
        ans+=abs(stoi(vec[i])-2);
    }
    cout<<ans;
}
```

```cpp
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10000005
#define mod 1000000007

signed main() { 

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    vector<char>vec;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        vec.push_back(s[i]+7);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<"";
    }
}
```

```cpp
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10000005
#define mod 1000000007

signed main() { 

    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[26]={1,10,19,28,37,46,55,64,39,73,82,2,11,20,48,29,38,47,56,65,74,83,21,3,12,30};
    string s;
    cin>>s;
    int sum=0;
    sum+=a[s[0]-'A'];
    for(int i=1;i<s.length();i++){
        sum+=(s[i]-48)*(9-i);
    }
    sum+=s[9]-48;
    if(sum%10==0){
        cout<<"real"<<endl;
    }
    else{
        cout<<"fake"<<endl;
    }
}
```

```cpp
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10000005
#define mod 1000000007

signed main() { 

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    bool flag=true;
    int sum=0;
    for(int i=0;i<s.length();i++){
        if(!isalpha(s[i])){
            flag=false;
            cout<<"";
        }
        else{
            sum+=toupper(s[i])-'A'+1;
        }
    }
    cout<<sum;
}
```


```cpp
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10000005
#define mod 1000000007

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    bool flag=true;
    int n=s.length();
    if(n%2==1){
        cout<<"No";
    }
    else{
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                flag=false;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
            for(int i=0;i<n/2;i++){
                cout<<s[i]<<"";
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
```


```cpp
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 2e18
#define maxn 10000005
#define mod 1000000007

signed main() { 

    ios::sync_with_stdio(0);
    cin.tie(0);

    string a,b;
    cin>>a>>b;
    stringstream A(a);
    stringstream B(b);
    string Ta[50];
    string Tb[50];
    string k;
    int n,m;

    int i=0;
    while(getline(A,k,':')){
        Ta[i]=k;
        i++;
    }
    n=stoi(Ta[0])*60+stoi(Ta[1]);

    int j=0;
    while(getline(B,k,':')){
        Tb[j]=k;
        j++;
    }
    m=stoi(Tb[0])*60+stoi(Tb[1]);
    if(m>n){
        cout<<m-n<<endl;
    }
    else{
        m+=1440;
        cout<<m-n<<endl;
    }
}
```
