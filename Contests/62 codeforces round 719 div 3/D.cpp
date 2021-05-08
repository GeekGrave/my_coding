// Problem: D. Same Differences
// Contest: Codeforces - Codeforces Round #719 (Div. 3)
// URL: https://codeforces.com/contest/1520/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
    int ar[n];
    fin(i,0,n){
    	cin>>ar[i];
    }
    // int ctr=0;
	mll m;
    fin(i,0,n){
    	if(ar[i]>i)
			m[ar[i]-i]++;
    }
    int s = 0;
    for(auto i : m){    
    	int x = i.second-1;
    	s+=x*(x+1)/2;
    	
    }
    cout<<s<<endl;
    // cout<<(ctr*(ctr+1))/2<<endl;
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