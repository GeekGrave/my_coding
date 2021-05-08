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

int b[64];
void solve(){
    int n,q;
    cin>>n>>q;
    int ar[n];
    int ans=0;
    fin(i,0,n){
        cin>>ar[i];
        fin(j,0,64){
            if(ar[i]&(1<<j)){
                b[j]++;
            }
        }
        ans|=ar[i];
    }
    cout<<ans<<endl;
    while(q--){
        int x,v;
        cin>>x>>v;
        // ar[x-1]=v;
        // cout<<ar[x-1]<<endl;
        fin(i,0,32){
            if(ar[x-1]&(1<<i)){
                b[i]--;
                if(b[i]==0){
                    // cout<<b[i]<<" "<<i<<endl;
                    ans&=(~(1<<i));
                }
            }
        }
        fin(i,0,32){
            if(v&(1<<i)){
                b[i]++;
            }
        }
        ar[x-1]=v;
        ans|=v;
        cout<<ans<<endl;
    }
}

signed main(){
    fast;
    int t;
    cin>>t;

    while(t--){
        fill(b,0);
        solve();
    }
    return 0;
}