#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
int nodes,edges,t,x,y;
cin>>t;
while(t--){
cin>>nodes>>edges;
vector<ll> v[100001];
ll visit[100001]={false};
for(int i=0;i<edges;i++){
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
}
queue<ll> q;
q.push(1);
visit[1]=true;
while(!q.empty()){
    ll p=q.front();q.pop();
    cout<<p<<" ";
    for(ll i=0;i<v[p].size();i++){
        if(visit[v[p][i]]==false){
            q.push(v[p][i]);
            visit[v[p][i]]=true;
        }
    }
}
cout<<endl;
}
return 0;
}
