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
