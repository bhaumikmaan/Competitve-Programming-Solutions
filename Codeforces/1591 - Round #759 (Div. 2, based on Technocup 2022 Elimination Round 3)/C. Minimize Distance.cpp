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
	int n , m ;
	cin >> n >> m ;
	vector<int> a , b ;
	for(int i = 0 ; i < n ; i++)
	{
		int x ;
		cin >> x ;
		if(x < 0)
		{
			a.pb(abs(x)) ;
		}
		else
		{
			b.pb(x) ;
		}
	}	
	sort(all(a)) ;
	sort(all(b)) ;
	int ans = 0 ;
	for(int i = (int)a.size() - 1 ; i >= 0 ; i -= m)
	{
		ans += a[i]*2 ;
	}
	for(int i = (int)b.size() - 1 ; i >= 0 ; i -= m)
	{
		ans += b[i]*2 ;
	}
	int x = 0 ; 
	if(a.size())
	{
		x = max(x , a.back()) ;
	}
	if(b.size())
	{
		x = max(x , b.back()) ;
	}
	ans -= x ;
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
