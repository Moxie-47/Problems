#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n = 0;
    cin >> n;
    string str = "";
    cin >> str;
    unordered_map<char, int> freq;
    int max_freq = 0;
    char max_chr = str[0];
    char min_chr = str[n - 1];
    int min_freq = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        freq[str[i]]++;
        if (freq[str[i]] > max_freq)
        {
            max_freq = freq[str[i]];
            max_chr = str[i];
        }
    }

    for (auto it : freq)
    {
        if (it.first != max_chr && it.second < min_freq)
        {
            min_freq = it.second;
            min_chr = it.first;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (str[i] == min_chr)
        {
            str[i] = max_chr;
            break;
        }
    }
    cout << str << endl;
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