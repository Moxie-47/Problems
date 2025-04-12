// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int test_case = -1;
//     cin >> test_case;
//     while (test_case--)
//     {
//         float n = -1, m = -1, k = -1;
//         cin >> n >> m >> k;
//         if (n <= k || m == 1 && k >= m)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
           
//             int temp = -1 ;
//             float p = n/m ;
//             if( p - int(p) >= 0.5 )temp = int(p) + 1;
//             else
//                 temp = int(p); 
            
//             if(n - temp > k)cout<<"YES"<<endl;
//             else 
//             cout<<"NO"<<endl;
//         }
//     }
//         return 0; 
// }


 

#include <bits/stdc++.h>
 
using namespace std;
 
#define                 ll  long long
#define          rep(i, n)  for (int i = 0; i <  (int)(n); i ++)
#define         rep1(i, n)  for (int i = 1; i <= (int)(n); i ++)
#define       replr(i,l,r)  for (int i = l; i <= (int)(r); i ++)
#define         rev(i,r,l)  for (int i = r; i >= l; --i)
#define                 pb  push_back 
#define             all(x)  x.begin(),x.end()
#define               maxn
#define               endl  "\n"
#define                 NO  cout<<"NO"<<endl
#define                YES  cout<<"YES"<<endl
#define                 fi  first
#define                 se  second
#define          file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout);} 
 
template <class X, class Y>
   bool minimize (X &x, const Y &y){
       if (x > y){
        x = y;
        return true;
       }
       return false; 
 
   }
 
template <class X, class Y>
   bool maximize (X &x, const Y &y){
       if (x < y){
        x = y;
        return true;
       }
       return false;
 
   }
 
void solve (){
  int n,m,k;
  cin>>n>>m>>k;
  int cur=(n/m)+(n%m!=0);
  if (k<n-cur)
    YES;
else
    NO;
}
 
 
int main ()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
    
    int test_case = 1;
    cin >> test_case;
    while (test_case--){
 
        solve();
    }
 
     
    return 0;
}