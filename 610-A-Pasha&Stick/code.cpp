#include <bits/stdc++.h>
#define int long long
using namespace std;

int Helper(int n)
{
    // if(n%4)
    // return n/4 ;
    // return n/4-1 ;


    // --- another solution ---
    if(n%2){
        return 0;
    }

    n/=2 ;
    int ans = n-1 ;
    return ans/2 ;
}

void solve()
{
    int n = 0;
    cin >> n;
    if (n % 2)
    {
        cout << 0 << endl;
        return;
    }
    cout << Helper(n) << endl;
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