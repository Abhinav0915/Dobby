#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;
        if (y >= h)
        {
            cout << 1 << endl;
            continue;
        }
        int normal_attacks = (h - y) / x; 
        int remaining_health = h - (normal_attacks * x);
        int special_attacks = 1; 
        if (remaining_health > y)
        {
            special_attacks++;
        }

        cout << normal_attacks + special_attacks << endl;
    }
    return 0;
}
