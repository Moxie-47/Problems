#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n = 0 ;
    cin>>n ;
    vector<int>a(n,0) ;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i] ;
    }

    sort(a.begin(), a.end()) ;
    
    int ind = -1 ;
    int val = 0 ;
    for(int i = n-2 ; i>=0 ;i--){
        if(a[i]== a[i+1]){
            val = a[i] ;
            ind = i ;
            break; 
        }
    }
    if(ind == -1){
        cout<<-1<<endl;
        return ;
    }

    a.erase(a.begin()+ ind) ;
    a.erase(a.begin()+ ind) ;

    bool found = false ;
    for(int i = 0 ; i<n-3; i++){
        if(a[i] + 2*val > a[i+1]){
            cout<<val<<" "<<val<<" "<<a[i]<<" "<<a[i+1]<<endl;
            found = true ;
            break; 
        }
    }
    if(!found)cout<<-1<<endl;
    return  ;
    
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