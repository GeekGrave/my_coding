#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v, v1;
    map<int, vector<ll>> m;
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        v1.push_back(x);
        m[x].push_back(i);
    }
    sort(v.begin(), v.end());
    map<int, int> m1;
    int ctr = 0;
    for (ll i = n - 1; i >= 0;)
    {
        if (m[v[i]].size() == 1)
        {
            ctr++;
            m1[m[v[i]][0]] = ctr;
            i--;
        }
        else
        {
            vector<ll> v2 = m[v[i]];
            sort(v2.begin(), v2.end());
            for (ll j = 0; j < v2.size(); j++)
            {
                m1[v2[j]] = ++ctr;
            }
            i -= v2.size();
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << m1[i] << " ";
    }
    cout << endl;
}
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}