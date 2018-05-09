#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
ll a,b;
ll visited[100001]={false},f=0,w,y;
cin>>a>>b;
queue<pair<ll,ll> >q;
pair<ll,ll> p;
q.push(make_pair(a,0));visited[a]=true;
while(!q.empty()){
p=q.front();q.pop();w=p.first;y=p.second;
if(w==b){cout<<y<<endl;f=1;break;}
if((w*2)<=10000 && !visited[w*2]){q.push(make_pair(w*2,y+1));visited[w*2]=true;}
if((w-1)<=10000 && !visited[w-1]){q.push(make_pair(w-1,y+1));visited[w-1]=true;}
}
if(f==0){cout<<"-1"<<endl;}
return 0;
}


