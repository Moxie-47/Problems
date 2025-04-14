#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n = 0 ;
    cin>>n ;
    string ans = "" ;
    for(int i = 1 ;i<n; i++){
        ans+='0' ;
    }
    ans+='1' ;
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