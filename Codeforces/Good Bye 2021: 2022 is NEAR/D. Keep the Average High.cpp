/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200008
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
void solve()
{
    int n ;
    cin >> n ;
    vi a(n) ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    int x ;
    cin >> x ;
    vi s(n + 1 , 0) ;
    for(int i = 0 ; i < n ; i++)
    {
    	s[i + 1] = s[i] + a[i] - x ;
    }
    int ans = 0 , mx = -inf , pre = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
    	if(s[i + 1] >= mx)
    	{
    		ans ++ ;
    		mx = max(mx , pre) ;
    	}
    	else
    	{
    		mx = -inf ;
    	}
    	pre = s[i + 1] ;
    }
    cout << ans ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
	while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    	
