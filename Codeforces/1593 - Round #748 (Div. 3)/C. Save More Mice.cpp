/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 400010
using namespace std ;
int a[N] ;
void solve( )
{
	int n , k ;
	cin >> n >> k ;
	for(int i = 0 ; i < k ; i++)
	{
		cin >> a[i] ;
		// cout << a[i] << " " ;
	} 
	sort(a , a + k) ;
	int ans = 0 , curr = 0 ;
    for(int i = k - 1 ; i >= 0 ; i--)
    {
    	curr += n - a[i] ;
    	if(curr < n)
    	{
    		ans++ ;
    	}
    	else
    	{
    		break ;
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
