#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    cin.ignore();
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    map<char,vector<int> > v1;
    string ar = s;
    string ar2 = t;
    int cnt=0;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        if(s[i]==t[cnt])
        {
          cnt++;
          v.push_back(i+1);
        }
        if(cnt==m)
          break;
    }
    cnt--;
    vector<ll> v2;
    
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]==t[cnt])
        {
          cnt--;
          v2.push_back(i+1);
        }
        if(cnt==-1)
          break;
    }
    
    reverse(v2.begin(),v2.end());
    int maxx=-1;
    for(int i=0;i<v.size()-1;i++){
        int x = v[i];
        int y = v2[i+1];
        if(y-x>maxx){
            maxx=y-x;
        }
    }
    cout<<maxx<<endl;
}
int main(){
    solve();
    return 0;
}