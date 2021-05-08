#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define popcount    __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount  __builtin_popcountll
#define fin(i,c,n) for(ll i=c;i<n;i++)
#define fer(i,c,n) for(ll i=c;i>=n;i--)
#define fill(a, x) memset(a, x, sizeof(a))
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
  int n,l,r,s;
  cin>>n>>l>>r>>s;
  int len=(r-l+1);
  
 
  int sum=(len*(len+1))/2;
  if(s<sum)
  {
    cout<<"-1\n";
    return;
  }
  ll arr[len];
  for(int i=0;i<len;i++)
  {
     arr[i]=i+1;
  }
  ll diff=(s-sum);
  int cnt=0;
  for(int i=n-1;i>=0;i--)
  {
       if(cnt>=len)break;
       ll cut=(i+1-arr[len-cnt-1]);
       //cout<<cut<<" ";
       if(cut<diff)
       {
          arr[len-cnt-1]=i+1;
          diff-=cut;
       }else
       {
          arr[len-cnt-1]+=diff;
          diff=0;
          break;
       }
       cnt++;
  };
  if(diff!=0)
  {
     cout<<"-1\n";
     return;
  }
  bool visited[n+1]={false};
  for(int i=0;i<len;i++)
  {
       visited[arr[i]]=true;
       //cout<<arr[i]<<" ";
  }
 
  for(int i=0;i<(l-1);i++)
  {
      for(int j=1;j<=n;j++)
      {
         if(visited[j]!=true)
         {
            visited[j]=true;
            cout<<j<<" ";
            break;
         }
      }
  }
  for(int i=0;i<len;i++)
  {
    cout<<arr[i]<<" ";
  }
  for(int i=r;i<n;i++)
  {
     for(int j=1;j<=n;j++)
      {
         if(visited[j]!=true)
         {
            visited[j]=true;
            cout<<j<<" ";
            break;
         }
      }
  }
  cout<<"\n";
}

int main(){
    fast;
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}