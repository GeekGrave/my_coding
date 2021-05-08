#define int long long
using namespace std;
int a[10001];
main()
{
    int t, n, x, s, p, l, k;
    cin >> t;
    while(t --)
    {
        l = 0;
        k = 0;
        s = 0;
        p = 0;
        cin >> n;
        for (int i = 1; i <= n; i ++)
        {
            cin >> a[i];
            s += a[i];
            if (a[i] == 1)
                k ++;
            else
                l ++;
        }
        if (k == 0)
        {
            if (l % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        if (s % 2 == 0 && k % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
}