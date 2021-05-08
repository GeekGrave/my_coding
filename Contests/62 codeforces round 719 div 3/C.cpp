// Problem: C. Not Adjacent Matrix
// Contest: Codeforces - Codeforces Round #719 (Div. 3)
// URL: https://codeforces.com/contest/1520/problem/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms
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
    if(n==2){
    	cout<<-1<<endl;
    	return;
    }
    int ar[n][n];
    fill(ar,0);
    int a=1;
    for(int i=0;i<n;i++){
    	ar[i][i]=a++;
    }
   
    // cout<<a<<endl;
    int x = 0;
    for(int i=n-1;i>=0;i--){
    	if(ar[x][i]==0)
	    	ar[x][i] = a++;
	    x++;
    }
    
    // cout<<a<<endl;
	x = n-1;
	if(n%2==0){
	    for(int i = 0;i<n/2-1;i++){
	    	for(int j=0;j<n;j++){
				if(ar[i][j]==0){
					ar[i][j] = a++;
					ar[x][j] = a++;
				}
			}
			x--;
	    }
	    // cout<<a<<endl;
	    // cout<<a<<endl;
	    x=n-1;
	    for(int i = 0;i<n/2-1;i++){
	    	for(int j=0;j<n;j++){
	    		// cout<<ar[j][i]<<endl;
				if(ar[j][i]==0){
					ar[j][i] = a++;
					ar[j][x] = a++;
				}
			}
			x--;
	    }
	    // cout<<a<<endl;
    }
    
	if(n%2!=0){
		for(int i = 0;i<n/2;i++){
		    for(int j=0;j<n;j++){
				if(ar[i][j]==0){
					ar[i][j] = a++;
					ar[x][j] = a++;
				}
			}
			x--;
    	}
    	// cout<<a<<endl;
	    // cout<<a<<endl;
    	x=n-1;
	    for(int i = 0;i<n/2;i++){
    		for(int j=0;j<n;j++){
	    		// cout<<ar[j][i]<<endl;
				if(ar[j][i]==0){
					ar[j][i] = a++;
					ar[j][x] = a++;
				}
			}
			x--;
	    }    	
	}
    
    fin(i,0,n){
    	fin(j,0,n){
    		cout<<ar[i][j]<<" ";
    	}
    	cout<<endl;
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