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
    int a,n,d;
    cin>>a>>n>>d;
    int x,y,z;
    cin>>x>>y>>z;
    int ans;
    if(n==0){
        cout<<"NO\n";
        return;
    }
   
    if(a<=18){
        ans=10;
    }
    else if(a<=50){
        ans=14;
    }
    else{
        ans=21;
    }
     if(x+y+z<n){
        if(d>=ans)
            cout<<"YES\n";
        else    
            cout<<"NO\n";
        return;
    }
    if(x!=0){
        d-=10;
        n--;
        if(d>=ans && n>0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        return;
    }
    if(y!=0){
        d-=14;
        n--;
        if(d>=ans && n>0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        return;
    }
    if(z!=0){
        d-=21;
        n--;
        if(d>=ans && n>0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        return;
    }
    else{
        if(d>=ans && n>0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        return;
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