#include <bits/stdc++.h>
#define int long long
using namespace std;

int combination(int n)
{
    if (n < 2)
        return 0;
    return n * (n - 1) / 2;
}

void solve()
{
    int n = 0, m = 0;
    cin >> n >> m;
    if (m == 1)
    {
        int temp = combination(n);
        cout << temp << " " << temp << endl;
    }
    else
    {
        int maxi = combination(n - m + 1);
        int other1 = n/m ;
        int other2 = n%m ;
        int mini = other2*(combination(other1+1)) + (m-other2)*(combination(other1)) ;
        cout << mini << " " << maxi << endl;
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
     
        solve();
    
    return 0;
}