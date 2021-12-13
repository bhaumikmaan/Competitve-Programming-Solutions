/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100007
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	vector<int> a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}	
	int mx = 0 , ans = -1 ;
	for(int i = n - 1  ; i >= 0 ; i--)
	{
		if(a[i] > mx)
		{
			mx = a[i] ;
			ans++ ;
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
