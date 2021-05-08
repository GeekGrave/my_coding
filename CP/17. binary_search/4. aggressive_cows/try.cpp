#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef vector<long long int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        ll a[100009];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        ll i=1,j=1000000001L,ans=0,l=0;
        while(i<=j)
        {
            ll mid=((j+i)/2);
            ll fi=a[0],temp=1;
            for(int k=1;k<n;k++)
            {
                if(a[k]-fi>=mid)
                    temp++,fi=a[k];
            }
            if(temp<c)
                j=mid-1;
            else
            {
                ans=mid;
                i=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
