pA:
```cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 
signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

	int y;
	cin>>y;
	if(y%4==0 and y%100!=0 or y%400==0){
		cout<<"a leap year"<<endl;
	}
	else{
		cout<<"a normal year"<<endl;
	}
}
```

pB
```cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    if(c>=b and a>b){
        cout<<"-1";
    }
    else if(a==0){
        cout<<"0";
    }
    else if(b>=a){
        cout<<"1";
    }
    else{
        cout<<long(ceil(1.0*(a-b)/(b-c)+1));
    }
}
```

pC
```cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int tmp=100/n;
    int add=100%n;
    vector<int>vec(n,tmp);
    for(int i=0;i<add;i++){
        vec[i]=tmp+1;
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
}
```

pD
```cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>ans;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
            if(i*i!=n){
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    int cnt=ans.size()-1;
    for(int i:ans){
        cout<<i;
        if(cnt>0){
            cout<<' ';
            cnt--;
        }
    }
}
```

pE
```cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    int t=0;
    while(n<m){
        n*=3;
        ++t;
    }
    cout<<t<<endl;
}
```

pF
```cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int m,n;
    while(cin>>m>>n and m!=0 and n!=0){
        if(m>n){
            cout<<"Unfair"<<endl;
        }
        else{
            cout<<"Fair"<<endl;
        }
    }
}
```

pG
```cpp
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"


signed main(){
    bool flag=true;
    int k;
    long long n;
    long long c=2;
    cin>>k;
    for (int i=1;i<=k;i++){ 
        cin>>n;
        if (n<2){
            cout<<n<<"非質數"<<endl;
            continue;
        }
        while (c*c<=n){ 
            if (n%c==0){
                cout<<n<<"非質數"<<endl;
                flag=false;
                break;
            }
             c+=1;
        }
        if (flag){ 
            cout<<n<<"是質數"<<endl;
        }
        c=2;
        flag=true;
    }
}
```
