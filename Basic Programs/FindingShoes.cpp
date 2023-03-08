#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m == 0)
            cout << 2 * n << endl;
        else if (n > m)
            cout << (n * 2) - m << endl;
        else
            cout << n << endl;
    }
    return 0;
}
