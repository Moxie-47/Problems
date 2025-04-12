#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int ans = 2 * max((x + k - 1) / k, (y + k - 1) / k);
    if (x > y)
    {
        cout << ans - 1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t_case = -1;
    cin >> t_case;
    while (t_case--)
    {
        solve();
    }
    return 0;
}