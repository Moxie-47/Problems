#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n = 0 ;
    cin>>n ;
    vector<int>wealth(n) ;

    int sum = 0 ; 
    int hood_caller = 0 ;
    for (int i = 0; i < n; i++)
    {
        cin>>wealth[i] ;
    }

    sort(wealth.begin() , wealth.end()) ;
    for (int i = 0; i < n; i++)
    {
        sum+= wealth[i] ;
        if(i==(n/2))
        hood_caller = wealth[i] ;
    }

    

    if(n == 1 ||  n == 2){
        cout<<-1<<endl;
        return ;
    }

    // if(hood_caller < (float(sum)/(2*n))){
    if(2*n*hood_caller < sum){
        cout<<0<<endl;
        return ;
    }
    int pot_gold = (2*n*hood_caller) - sum + 1 ;
    cout<< pot_gold <<endl;
    return ;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t_case = -1;
    cin>>t_case ;
    while(t_case--){
        solve();
    }
    return 0;
}