#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n = 0, m = 0, q = 0;
    cin >> n >> m >> q;
    vector<int> teachers(m);
    vector<int> queries(q);
    for (int i = 0; i < m; i++)
    {
        cin >> teachers[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
    }

    int first = teachers[0] - 1;
    int last = n - teachers[m - 1];

    vector<int> diff;
    for (int i = 0; i < m - 1; i++)
    {
        diff.push_back(teachers[i + 1] - teachers[i]);
    }

    for (int i = 0; i < q; i++)
    {
        if (queries[i] < teachers[0])
        {
            cout << first << endl;
        }
        else if (queries[i] > teachers[m - 1])
        {
            cout << last << endl;
        }
        else
        {
            for (int j = 0; j < teachers.size()-1; j++)
            {
                if (queries[i] > teachers[j] && queries[i] < teachers[j+1]){
                    cout<<ceil((diff[j])/2)<<endl;
                    // return ;
                    break;
                }
            }
        }
    }
    return ;
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