#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n = 0;
    cin >> n;
    string seq = "";
    cin >> seq;
    int hyphen = 0;
    int underscore = 0;

    for (int i = 0; i < n; i++)
    {
        if (seq[i] == '-')
            hyphen++;
        else
            underscore++;
    }
    if(hyphen <= 1 || underscore == 0){
        cout<<0<<endl;
        return;
    }
    cout<<underscore*(hyphen/2)*(hyphen-(hyphen/2))<<endl ;
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