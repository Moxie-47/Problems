#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n = 0 ;
    cin>>n ;
    string vowels = "aeiou" ;
    string ans = "" ;
    int mul_letters_cnt = n%5 ;
    int common_cnt = n/5 ;
    int cnt = 0 ;
    for(int i = 0 ;i<5 && cnt < n; i++){
        int temp_cnt = common_cnt ;
        while(temp_cnt>0){
            ans+=vowels[i] ;
            temp_cnt-- ;
            cnt++ ;
        }
        if(mul_letters_cnt){
            ans+=vowels[i] ;
            mul_letters_cnt-- ;
            cnt++ ;
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