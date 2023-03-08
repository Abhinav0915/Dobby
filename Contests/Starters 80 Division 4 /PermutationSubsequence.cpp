#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        map<int, int> mapp;

        for (int i = 0; i < x; i++)
        {
            int x;
            cin >> x;
            mapp[x]++;
        }
        long long ans = 0;
        const int MOD = 1e9 + 7;
        long long prev = 1;
        for (int i = 1; i <= x; i++)
        {
            long long temp = prev * mapp[i];
            temp %= MOD;
            ans += temp;
            prev = temp;
            ans %= MOD;
        }

        cout << ans << endl;
    }
    return 0;
}