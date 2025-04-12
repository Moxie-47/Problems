// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// void solve()
// {
//     int n = 0, q = 0;
//     cin >> n >> q;
//     vector<int> coordinates(n);
//     vector<int> queries(q);
//     unordered_map<int,int>not_present ;
    
    
//     vector<int> answer(q);
//     vector<int> left(n);
//     // vector<int> right(n);
//     int s_index = 0;
//     int e_index = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> coordinates[i];
//         not_present[coordinates[i]]++ ;
//         if (i == 0)
//             s_index = coordinates[i];
//         if (i == n - 1)
//             e_index = coordinates[i];
//     }

//     for (int i = 0; i < q; i++)
//     {
//         cin >> queries[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0)
//         {
//             // left[i] = 0;
//             // right[i] = (n - i - 1);
//             left[i] = (n - i - 1);
//         }
//         else if (i == n - 1)
//         {
//             left[i] = (i) * (n - i);
//             // right[i] = 0;
//         }
//         else
//         {
//             left[i] = (i) * (n - i) + (n - i - 1);
//             // right[i] = (n - i - 1);
//         }
//     }

//     map<int, int> mp;
//     for (int i = 0; i < left.size(); i++)
//     {
//         mp[left[i]]++;
//     }

//     for (int j = s_index; j <= e_index; j++)
//     {
//         if (not_present[j] == 0)
//         {
//             mp[(j - s_index) * (e_index - j)]++;
//             not_present[j] = 1;
//         }
//     }

//     for (int i = 0; i < q; i++)
//     {
//         answer[queries[i]-1] = mp[queries[i]] ;
//     }
//     for (int i = 0; i < q; i++)
//     {
//         cout<<answer[i]<<" ";
//     }
//     cout<<endl;
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t_case = -1;
//     cin >> t_case;
//     while (t_case--)
//     {
//         solve();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n = 0, q = 0;
    cin >> n >> q;
    vector<int> coordinates(n);
    for(int i = 0 ;i<n ;i++){
        cin>>coordinates[i] ;
    }

    map<int ,int>mp ; 
    for(int i = 0 ; i<n ;i++){
        int before = i ;
        int after = n-i-1 ;
        int seg = (before+1)*(after+1)-1 ;
        mp[seg]++ ;
        if(i > 0){
            int elementsInBetween = coordinates[i]-coordinates[i-1] - 1; 
            seg = (before)*(after +  1) ;
            mp[seg] +=elementsInBetween ;
        }
    }
    while (q--)
    {
        int k = 0; 
        cin>>k ;
        if(mp.count(k)){
            cout<<mp[k]<<" ";
        }
        else
            cout<<0<<" ";
    }
    cout<<endl;
    
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