#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a = -1, b = -1, m = -1;
    int test_case = -1;
    cin >> test_case;

    while (test_case--)
    {

        cin >> a;
        cin >> b;
        cin >> m;

        ll ans = 0;
        ans += (m / a + 1) + (m / b + 1);
        cout << ans << endl;
    }

    return 0;
}