#include <bits/stdc++.h>
#define int long long
#define vll vector<int>
#define mll map<int,int>
#define pll pair<int,int>
#define pb push_back
#define mp make_pair
#define popcount    __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount  __builtin_popcountll
#define fin(i,c,n) for(int i=c;i<n;i++)
#define fer(i,c,n) for(int i=c;i>=n;i--)
#define fill(a, x) memset(a, x, sizeof(a))
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define mod 1000000007
//Functions : 
int poww(int x,int y){int res=1; x%=mod; if(x==0) return 0; while(y>0){if(y&1) res=(res*x)%mod; y=y>>1,x=(x*x)%mod;} return res;}

using namespace std;

void fun(string s,int n){
    int ctr=0;
    fin(i,0,n){ 
        if(s[i]=='T'){
            ctr++;
        }
        else{
            if(ctr==0){
                cout<<"NO\n";
                return;
            }
            ctr--;
        }
    }
    ctr=0;
    fer(i,n-1,0){
        if(s[i]=='T'){
            ctr++;
        }
        else{
            if(ctr==0){
                cout<<"NO\n";
                return;
            }
            ctr--;
        }
    }
    cout<<"YES\n";
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> m;
    if(s[0]=='M' || s[n-1]=='M'){
        cout<<"NO\n";
        return;
    }
    else{
        fin(i,0,n){
            m[s[i]]++;
        }
        if(m['T']%2==0){
            if(m['M']==(m['T']/2)){
                fun(s,n);
            }
            else{
                cout<<"NO\n";
                return;
            }
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
}

signed main(){
    fast;
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}