#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
ll t,a,b,mul,di,add,sub;
cin>>t;
while(t--){
cin>>a>>b;
cin>>mul>>di>>add>>sub;
ll w,y,f=0;
ll visited[1000001]={false};
queue<pair<ll,ll> >q;
pair<ll,ll> p;
q.push(make_pair(a,0));visited[a]=true;
while(!q.empty()){
   p=q.front();w=p.first;q.pop();y=p.second;
   if(w==b){cout<<y<<endl;f=1;break;}
   if((w*mul)>=2 && (w*mul)<=1000000 && !visited[w*mul]){q.push(make_pair(w*mul,y+1));visited[w*mul]=true;}
   if((w/di)>=2 &&(w/di)<=1000000 && !visited[w/di]){q.push(make_pair(w/di,y+1));visited[w/di]=true;}
   if((w+add)>=2 && (w+add)<=1000000 && !visited[w+add]){q.push(make_pair(w+add,y+1));visited[w+add]=true;}
   if((w-sub)>=2 && (w-sub)<=1000000 && !visited[w-sub]){q.push(make_pair(w-sub,y+1));visited[w-sub]=true;}
}
if(f==0){cout<<"-1"<<endl;}
}
return 0;
}
