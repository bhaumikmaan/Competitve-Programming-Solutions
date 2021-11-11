/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll  
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;	
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;	
    cin >> testcases ;
    while( testcases -- )	
    {
    	int n , l , r ;
    	cin >> n >> l >> r ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++)
        {
        	cin >> v[i] ;
        }
        int ans = 0 ;
        sort(all(v)) ;
        for(int i = 0 ; i < n - 1 ; i++)
        {
        	auto a = lower_bound(v.begin()+i+1 , v.end() , l-v[i]);
              auto b = upper_bound(v.begin()+i+1 , v.end() , r-v[i]);
              ans += b - a ;
        }
        cout << ans ;
        cout << endl ;
    }
    return 0 ;
}    
