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
    int n;
    cin>>n;
    int ar[n+1];
    fin(i,1,n){
        cin>>ar[i];
    }
    int q;
    cin>>q;
    vector<pair<int,int> v;
    int a;
    int ctr=0;
    whil(q--){
        int x,k;
        cin>>x>>k;
        int y;
        if()
        fin(i,x,n+1){
            y=ar[i];
            ar[i]-=k;
            if(ar[i]<0){
                ar[i]=0;
                // k=0;
            }
            else{
                break;
            }
            if(i>x){
                ctr+=y;
            }
            k-=ar[i];
            if(k==0){
                break;
            }
        }
        if()
    }
}

signed main(){
    fast;
    int t=1;
    // cin>>t;

    while(t--){
        solve();
    }
    return 0;
}