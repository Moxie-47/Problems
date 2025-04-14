#include<bits/stdc++.h>
#define int long long
using namespace std;

// ---- MY way ----
// void solve(){
//     int n = 0 ;
//     cin>>n ;
//     string vowels = "aeiou" ;
//     string ans = "" ;
//     int mul_letters_cnt = n%5 ;
//     int common_cnt = n/5 ;
//     int cnt = 0 ;
//     for(int i = 0 ;i<5 && cnt < n; i++){
//         int temp_cnt = common_cnt ;
//         while(temp_cnt>0){
//             ans+=vowels[i] ;
//             temp_cnt-- ;
//             cnt++ ;
//         }
//         if(mul_letters_cnt){
//             ans+=vowels[i] ;
//             mul_letters_cnt-- ;
//             cnt++ ;
//         }
//     }
//     cout<<ans<<endl;
// }


// --- other cool way to solve this problem ---
// -- way 1 ---
// void solve(){
//     int n ; 
//     cin >> n ; 
 
//     string a = "";
//     string e = "";
//     string i = "";
//     string o = "";
//     string u = "";
 
//     for(int k=0 ; k<n ; k++)
//     {
//       if(k%5==0)
//       a += 'a' ;
 
//       if(k%5==1)
//       e += 'e' ;
 
//       if(k%5==2)
//       i += 'i' ;
 
//       if(k%5==3)
//       o += 'o' ;
 
//       if(k%5==4)
//       u += 'u' ;
//     }
 
//     string ans = a+e+i+o+u ;
 
//     cout << ans << endl ;
// }

// ---- way 2 (this one is special) ----

void solve() {
    int n;
    cin >> n;
    
    string s = "aeiou";
    string ans;
    for (int i = 0; i < 5; i++) {
        int x = n / (5 - i);
        ans += string(x, s[i]);
        n -= x;
    }
    
    cout << ans << "\n";
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