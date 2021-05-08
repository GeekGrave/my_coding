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

void solve(){
    int n,r;
    cin>>n>>r;
    int a[n],b[n];
    fin(i,0,n){
        cin>>a[i];
    }
    fin(i,0,n){
        cin>>b[i];
    }
    int x=b[0];
    int maxx=x;
    fin(i,1,n){

        x-=(a[i]-a[i-1])*r;
        if(x<0){
            x=0;
        }
        x+=b[i];        
        maxx = max(maxx,x);
    }
    cout<<maxx<<endl;
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