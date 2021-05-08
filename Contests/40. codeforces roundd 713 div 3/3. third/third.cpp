#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define popcount    __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount  __builtin_popcountll
#define fin(i,c,n) for(ll i=c;i<n;i++)
#define fer(i,c,n) for(ll i=c;i>=n;i--)
#define fill(a, x) memset(a, x, sizeof(a))
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    vll v,v1;
    ll one=0,zero=0,q=0;
    ll n = s.length();
    fin(i,0,s.length()){
        if(s[i]=='1'){
            one++;
            v1.pb(i);
        }
        else if(s[i]=='0'){
            zero++;
            v1.pb(i);
        }
        else{
            q++;
            v.pb(i);
        }
    }
    ll req0 = a-zero;
    ll req1 = b-one;
    if(req1<0 || req0<0){
        cout<<-1<<endl;
        return;
    }
    if(q!=req1+req0){
        cout<<-1<<endl;
        return;
    }
    if(v1.size()!=0){
        fin(j,0,v1.size()){
            ll i = v1[j];
            if(s[n-(i+1)]!=s[i]){
                if(s[n-(i+1)]=='?'){
                    s[n-(i+1)]=s[i];
                    ((s[i]-'0')==1)?req1--:req0--;
                    q--;            
                }
                else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    if(q!=req0+req1){
        cout<<-1<<endl;
        return;
    }
    fin(i,0,s.length()/2){
        if(s[i]=='?'){
            if(req0>1){
                s[i]='0';
                s[n-(i+1)]='0';
                req0-=2;
            }
            else if(req1>1){
                s[i]='1';
                s[n-(i+1)]='1';
                req1-=2;
            }
        }
    }
    if(s.length()%2!=0){
        ll ctr=0;
        char f='0';

        if(req0==1){
            ctr++;
            f='0';
        }
        if(req1==1){
            ctr++;
            f='1';
        }
        if(ctr==2){
            cout<<-1<<endl;
            return;
        }
        else if(ctr==1){
            if(s[s.length()/2]=='?'){
                s[s.length()/2]=f;
                ((f-'0')==1)?req1--:req0--;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
    }
    else{
        if(req0>0 || req1>0){
            cout<<-1<<endl;
            return;
        }
    }
    if(req0>0 || req1>0){
        cout<<-1<<endl;
        return;
    }
    cout<<s<<endl;
}

int main(){
    fast;
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}