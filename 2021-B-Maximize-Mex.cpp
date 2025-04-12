#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n = 0, k = 0;
    cin >> n >> k;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for (int i = 0; i < n + 3; i++)
    {
        if (mp[i] == 0)
        {
            int j = i;
            while (j >= k)
            {
                if (mp[j - k] > 1)
                {
                    mp[j - k] -= 1;
                    mp[i] = 1;
                    break;
                }
                j -= k;
            }
            if (mp[i] == 0)
            {
                cout << i << endl;
                return;
            }
        }
    }

    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t_case = -1;
    cin >> t_case;
    while (t_case--)
    {
        solve();
    }
    return 0;
}