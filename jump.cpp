#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a[100000],n;
cin>>t;
while(t--){
cin>>n;
 for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int w,y,f=0;
  bool visited[100000]={false};
  queue<pair<int,int> >q;
  pair<int,int>p;
  q.push(make_pair(0,0));
  while(!q.empty()){
      p=q.front();w=p.first;y=p.second;q.pop();
      if(w==n){cout<<y<<endl;f=1;break;}
      if((w+1)<=n && !visited[w+1]){q.push(make_pair(w+1,y+1));visited[w+1]=true;}
      if((w+a[w])<=n && !visited[w+a[w]] && (w+a[w])>=0){q.push(make_pair(w+a[w],y+1));visited[w+a[w]]=true;}
  }
  if(f==0){cout<<"-1";}cout<<endl;
}
return 0;
}
