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
int arr[501][501];
void solve(){
    int n;
    cin>>n;
    int ar[n];
    
    fin(i,0,n){
        cin>>ar[i];
        // arr[i][i]=ar[i];
    }
    for(int i=0;i<ar[0];i++){
        arr[i][0]=ar[0];
        // cout<<arr[0][i]<<endl;
    }
    fin(i,1,n){
        int x=i,ctr=0;
        for(int j=i;j>=0,ctr<ar[i];j--){
            // cout<<arr[i][j]<<endl;
            if(arr[x][j]!=0){
                // cout<<x<<" "<<j<<endl;
                x++;
                j++;
            }
            arr[x][j]=ar[i];
            ctr++;
            if(j==0 && ctr!=ar[i]){
                x++;
                j++;
            }
        }
    }
    fin(i,0,n){
        fin(j,0,i+1){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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