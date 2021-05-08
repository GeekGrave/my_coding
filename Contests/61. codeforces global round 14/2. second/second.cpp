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
mll ar;
void sqr(){
    int x=1;
    fin(i,1,33){
        x*=2;
        ar[x]++;
    }
}
void solve(){
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<"NO\n";
        return;
    }
    int a = n/2;
    int b = n/4;
    // if(n==1){
    //     cout<<"NO\n";
    //     return;
    // }
    if(n==2){
        cout<<"YES\n";
        return;
    }
    // cout<<<<" "<<<<endl;
    if(sqrt(a*1.0) == ceil(sqrt(a*1.0))){
        cout<<"YES\n";
    }
    else{
        if((n%4)!=0){
            cout<<"NO\n";
            return;
        }
        if(sqrt(b*1.0) == ceil(sqrt(b*1.0))){
            cout<<"YES\n";
            return;
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
    sqr();
    while(t--){
        solve();
    }
    return 0;
}