#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> x;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            x[arr[i]]++;
        }

        int maximum_count = 0;
        for (auto i : x)
        {
            maximum_count = max(maximum_count, i.second);
        }

        cout << n - maximum_count << endl;
    }
    return 0;
}