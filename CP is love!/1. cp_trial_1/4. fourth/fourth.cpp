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
    int n,k;
    cin>>n>>k;
    int ar[n];
    int arr[n+1];
    arr[0]=0;
    fin(i,0,n){
        cin>>ar[i];
        
    }
    int i;
    for(i=1;i<n;i++){
        arr[i]=arr[i-1]+ar[i-1];
    }
    arr[i]=arr[i-1]+ar[n-1];
    // fin(i,0,n+1){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
    i=0;
    int j=k;
    int minn=INT_MAX;
    mll m;
    // int l=INT_MAX:
    // cout<<
    while(j<n+1){
        int a=minn;
        // cout<<arr[j]-arr[i]<<endl;
        minn=min(minn,arr[j]-arr[i]);
        // cout<<minn<<endl;
        if(a!=minn){
            m[minn]=i+1;
            // cout<<i<<endl;
        }
        i++;
        j++;
        
    }   
    cout<<m[minn]<<endl;
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