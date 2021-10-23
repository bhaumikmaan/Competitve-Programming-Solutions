/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
    int n , k ;
    cin >> n >> k ;
    vector<int> v ;
    if(k%2 == 0)
    {
        if(k == 0)
        {
            cout << "YES\n0" ;
        }
        else
        {
            cout << "NO" ;
        }
        return ;
    }
    cout << "YES\n" ;
    int x = 0 ;
    for(int i = 31 ; i >= 0 ; i--)
    {
		int y = (1LL<<i) ;
        if((y&k) != 0)
        {
            x = i + 1 ;
            break ;
        }
    }
    cout << x << "\n" ;
    int t = (1LL<<x) ;
    k = (k + t - 1)/2 ;
    int f = 1 ;
    for(int i = x - 2 ; i >= 0 ; i--)
    {
		int y = (1LL<<i) ;
        if((y&k) != 0)
        {
            v.pb(f) ;
            f += y ;
        }
        else
        {
            f -= y ;
            v.pb(f) ;
        }
    }
    // v.pb(f) ;
    // cout << v.size() ;
    // for(auto i:v)
    // {
        // cout << i << "\n" ;
    // }
    for(int i = x - 2 ; i >= 0 ; i--)
    {
    	cout << v[i] << "\n" ;
    }
    cout << f ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
        solve() ;
        cout << "\n" ;
    }
    return 0 ;
}  
