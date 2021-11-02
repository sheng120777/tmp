//dijkstra model
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 100005

vector<pair<int,int>>graph[maxn];
int dis[maxn];
bool gone[maxn]={false};
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

int n,m;

void initialize(int k){
    for(int i=1;i<=k;i++){
        gone[i]=false;
        dis[i]=inf;
    }
}

int dijkstra(int start,int end){
    pq.push({start,0});
    while(!pq.empty()){
        auto now=pq.top();
        pq.pop();
        int v=now.second;
        gone[v]=true;
        for(auto next:graph[v]){
            int u=next.first;
            int k=next.second;
            if(dis[u]>dis[v]+k){
                dis[u]=dis[v]+k;
                pq.push({dis[u],u});
            }
        }
    }
    return dis[end];
}

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }
    for(int i=1;i<=n;i++){
        initialize(n);
        cout<<dijkstra(1,i)<<endl;
    }
}
