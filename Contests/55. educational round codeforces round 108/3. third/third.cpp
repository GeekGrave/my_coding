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
    int u[n];
    fin(i,0,n){
        cin>>u[i];
    }
    int s[n];
    fin(i,0,n){
        cin>>s[i];
    }
    map<int,vector<int> > m1,m,m5;
    int s2=0;
    fin(i,0,n){
        m1[u[i]].pb(s[i]);
        s2+=s[i];
    }
    for(auto i : m1){
        vector<int> x = i.second;
        sort(x.begin(),x.end());
        int s5=0;
        for(auto j : x){
            s5+=j;
            m5[i.first].pb(s5);
        }
        // sort(x.begin(),x.end(),greater<int>());
        m[i.first]=x;
    }
    // for(auto i:m5){
    //     for(auto j : i.second){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    int s1=0;
    int l = m.size();
    int maxx = n-l+1;
    int ar[n+1]={0};
    // fin(i,0,n+1){
    //     s1=s2;
    //     if(m[i].size()>0){
    //         vll v1 - m[i];
    //         int sizee = v1.size();
    //         int rem = sizee%(i+1);
            
    //         if(rem!=0){
    //             // cout<<i+1<<" "<<m5[j.first][rem-1]<<endl;
    //             s1-=m5[j.first][rem-1];
    //         }
    //     }
    // }
    // cout<<m.size()<<endl;
    fin(i,0,maxx){
        s1=s2;       
        for(auto j : m){
            vector<int> v1 = j.second;
            int sizee = v1.size();
            int rem = sizee%(i+1);
            if(rem!=0){
                // cout<<i+1<<" "<<m5[j.first][rem-1]<<endl;
                s1-=m5[j.first][rem-1];
            }
        }
        cout<<s1<<" ";
    }
    fin(i,maxx,n){
        cout<<0<<" ";
    }
    cout<<endl;

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