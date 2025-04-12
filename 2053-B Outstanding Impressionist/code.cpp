#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n = 0;
    cin >> n;
    vector<vector<int>> range(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> range[i][0];
        cin >> range[i][1];
    }

    string ans = "";
    for (int i = 0; i < n; i++)
    {
        bool zero = false;
        for (int l = range[i][0]; l <= range[i][1]; l++)
        {
            zero = false;
            for (int k = 0; k < n; k++)
            {
                if (k == i)
                    continue;
                if (l == range[k][0] && l == range[k][1])
                {
                    zero = true;
                    break;
                }
            }
            if(!zero){
                ans+= '1' ;
                break ;
            }
        }
        if (zero)
        {
            ans += '0';
            // break; 
        }
    }
    cout<<ans<<endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t_case = -1;
    cin>>t_case ;
    while(t_case--){
        solve();
    }
    return 0;
}