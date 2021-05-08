// Problem: B. Nastia and a Good Array
// Contest: Codeforces - Codeforces Round #720 (Div. 2)
// URL: https://codeforces.com/contest/1521/problem/B
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

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;
   
    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}
 
// Function to return the smallest
// prime number greater than N
int nextPrime(int N)
{
 
    // Base case
    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
 
    // Loop continuously until isPrime returns
    // true for a number greater than n
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}

void solve(){
    int n;
    cin>>n;
    int ar[n];
    int maxx = 0;
    fin(i,0,n){
    	cin>>ar[i];
        maxx=max(maxx,ar[i]);
    }
    int l = n-1;
    int loc=0;
    int ctr=0;
    int count=0;
	map<pair<pair<int,int>,pair<int,int> >,int > m;
    fin(i,0,n-1){
		int g = __gcd(ar[i],ar[i+1]);
		if(g!=1){
			count++;
			if(ctr==0){
				loc = i;
				ctr++;
			}

			if(i!=l-1){
				
				ar[l] = min(ar[i+1],ar[l]);
                ar[i+1]=mod;
				// cout<<i+1+1<<" "<<l+1<<" "<<mod<<" "<<ar[l];
				m[{{i+1+1,l+1},{mod,ar[l]}}]++;
			}
			
			else{
				ar[i] = min(ar[i],ar[l]);
                ar[i+1] = mod;
				// cout<<i+1+1<<" "<<l<<" "<<mod<<" "<<ar[l-1];
                pair<int,int> p1 = {i+1+1,l};
                pair<int,int> p2 = {mod,ar[i]};
				m[{p1,p2}]++;
			}
		}
    }
    cout<<count<<endl;
    for(auto i : m){
    	pair<int,int> p1 = i.first.first;
        cout<<p1.first<<" "<<p1.second<<" ";
    	pair<int,int> p2 = i.first.second;
        cout<<p2.first<<" "<<p2.second<<"\n";
    }
    // fin(i,0,n){
    //     cout<<ar[i]<<" ";
    // }
    // cout<<endl;
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