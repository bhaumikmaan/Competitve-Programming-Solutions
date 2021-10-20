/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve()
{
    int n , x , p ;
    cin >> n >> x >> p ;
    int y = n - x ;
    int m = 3*x - y ;
    if(m >= p)
    {
    	cout << "PASS" ;
    }
    else
    {
    	cout << "FAIL" ;
    }
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
