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
    int ans = n - 1 ;
    for(int i = 0 ; i < n ; i++)
    {
    	for(int j = i + 1 ; j < n ; j++)
    	{
    		int x = a[i] - a[j] , y = j - i ;
    		int z = -x*i - y*a[i] ;
    		int cnt = 0 ;
    		for(int k = 0 ; k < n ; k++)
    		{
    			int num = (-x*k - z) , den = y ;
    			if(num != den*a[k])
    			{
    				cnt++ ;
    			}
    		}
    		ans = min(ans , cnt) ; 
    	}
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
