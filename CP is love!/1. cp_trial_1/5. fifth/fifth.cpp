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
    string s;
    cin>>s;
    int ctr1=0,ctr2=0;
    fin(i,0,s.length()-1){
        string x = s.substr(i,2);
        // cout<<i<<" "<<i+2<<endl;
        cout<<x<<endl;
        if(x=="AB"){
            ctr1++;
            i++;
        }
        if(x=="BA" && ctr1==1){
            ctr2++;
            // i++;
            break;
        }
    }
    // cout<<ctr1<<" "<<ctr2<<endl;
    if(ctr1 && ctr2){
        cout<<"YES\n";
        return;
    }
    ctr2=0,ctr1=0;
    fin(i,0,s.length()-1){
        string x = s.substr(i,2);
        // cout<<x<<endl;
        if(x=="BA"){
            ctr2++;
            i++;
        }
        if(x=="AB" && ctr2==1){
            ctr1++;
            // i++;
            break;
        }
        
    }
    if(ctr1 && ctr2){
        cout<<"YES\n";
        return;
    }
    
    // else{
        cout<<"NO\n";
    // }
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