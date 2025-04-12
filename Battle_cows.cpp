#include <bits/stdc++.h>
using namespace std;

int Helper(int rating[], int my_cow, int n)
{
  
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (rating[i] < rating[i - 1])
        {
            rating[i] = rating[i - 1];
            if (i - 1 == my_cow){
                my_cow++;
                cnt++;
            }
        }
        else
        {
            if (i == my_cow)
                cnt++;
        }

        if(i>my_cow)break; 
    }
    return cnt;
}

int main()
{
    int test_case = -1;
    cin >> test_case;

    while (test_case--)
    {
        int n = -1;
        cin >> n;
        int my_cow = -1;
        cin >> my_cow;

        int rating[n + 1] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> rating[i];
        }

        swap(rating[my_cow] , rating[1]) ;
        int ans = Helper(rating, 1, n);
        swap(rating[my_cow] , rating[1]) ;


        for (int i = 1; i <= my_cow; i++)
        {
            if (rating[i] > rating[my_cow])
            {
                swap(rating[i], rating[my_cow]);
                my_cow = i;
                break;
            }
        }
        ans = max(ans, Helper(rating, my_cow, n));
        cout << ans <<endl;
    }
    return 0;
}