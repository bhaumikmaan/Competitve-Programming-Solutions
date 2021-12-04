/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 1000000
using namespace std ;
int a[N] , b[N] , ans[N] ;
bool comp(int i , int j)
{
	if(a[i] != a[j])
	{
		return a[i] < a[j] ;
	}
	return (a[i]&1 ? b[i] > b[j] : b[i] < b[j]) ;
}
void solve()
{
	int n ;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++)
	{
		ans[i] = i ;
		cin >> a[i] >> b[i] ;
		a[i] /= 1000 ;
	}
	sort(ans + 1 , ans + n + 1 , comp) ;
	for(int i = 1 ; i <= n ; i++)
	{
		cout << ans[i] << " " ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
