#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

signed main(){
        boost
        int t;
        cin >> t;
        int c=1;
        while(t--){
            int n;
            cin>>n;
            string ans = "A";
            char a = 'A';
            int arr[n+1];
            for (int i = 1; i <=n; i++)
            {
                cin>>arr[i];
            }
            bool flag=0;
            int z=1;
            for(int i=1;i<=arr[1];i++){
                a++;
                ans+=a;
                z++;
            }
            for (int i = 2; i <= n; i++)
            {
                if(i%2==0){
                    a='A';
                    if(arr[i]>arr[i-1]){
                        ans[z-1]=a+arr[i];
                    }
                    int j = i;
                    int m = arr[j];
                    a='A'+arr[j]-1;
                    while (m--)
                    {
                        ans+=a;
                        a--;
                        z++;
                    }
                }
                else{
                    a='A';
                    int j = i;
                    int m = arr[j];
                    while(m--){
                        a++;
                        ans+=a;
                        z++;
                    }
                }
            }
            cout<<"Case #"<<c<<": "<<ans<<endl;
            c++;
        }

    return 0;
}