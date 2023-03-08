#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 2 * b[i] and b[i] <= 2 * a[i])
        {
            ans++;
        }
    }

    cout << ans << endl;
}
int main()
{

    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}