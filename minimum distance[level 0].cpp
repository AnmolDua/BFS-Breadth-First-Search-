#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
int t,nodes,edges,x,y;
cin>>t;
while(t--){
cin>>nodes>>edges;
vector<ll> adj[100001];
for(ll i=0;i<edges;i++){
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
bool visited[100001]={false};
ll level[100001];
queue<ll> q;
q.push(1);visited[1]=true;level[1]=0;
while(!q.empty()){
    ll p=q.front();q.pop();
    for(ll i=0;i<adj[p].size();i++){
        if(visited[adj[p][i]]==false){
            visited[adj[p][i]]=true;
            q.push(adj[p][i]);
            level[adj[p][i]]=level[p]+1;
        }
    }
}
cout<<level[nodes]<<endl;
}
return 0;
}
