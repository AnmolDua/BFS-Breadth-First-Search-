#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int mod(string s, int n){
    int r=0;
    for(int i=0;i<s.size();i++){
        r=r*10 +(s[i]-'0');
        r%=n;
    }
    return r;
}
string zeroandone(int n){
queue<string> q;
set<int> s;
string t="1";
q.push(t);
while(!q.empty()){
    string s1=q.front();q.pop();
    int rem=mod(s1,n);
    if(rem==0){return s1;}
    else if(s.find(rem)==s.end()){
        s.insert(rem);
        q.push(s1+"0");
        q.push(s1+"1");
    }
}
}
int main(){
int t,n;
cin>>t;
while(t--){
cin>>n;
cout<<zeroandone(n)<<endl;
}
return 0;
}
