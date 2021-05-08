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

//fast_exponentiation : 
    int poww(int x,int y){int res=1; x%=mod; if(x==0) return 0; while(y>0){if(y&1) res=(res*x)%mod; y=y>>1,x=(x*x)%mod;} return res;}

using namespace std;
int dp[10001];
int solving(int *ar, int i,int n){
    if(i>=n){
        return 0;
    }
    if(dp[i]!=0){
        return dp[i];
    }
    int ans = max(solving(ar,i+1,n),ar[i]+solving(ar,i+2,n));
    dp[i]=ans;
    return dp[i];
}
void solve(int t){
    int n;
    cin>>n;
    int ar[n];
    fin(i,0,n){
        cin>>ar[i];
        // dp[i]=0;
    }
    fill(dp,0);

    if(n==0){
        cout<<"Case "<<t<<": "<<0<<endl;
        return;
    }
    if(n==1){
        cout<<"Case "<<t<<": "<<ar[0]<<endl;
        return;
    }
    
    cout<<"Case "<<t<<": "<<solving(ar,0,n)<<endl;

}

signed main(){
    fast;
    int t;
    cin>>t;

    fin(i,1,t+1){
        // cout<<i<<endl;
        solve(i);
    }
    return 0;
}