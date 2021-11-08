/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
int sum(int n)
{
	return n*(n + 1)/2 ;
}
void solve( )
{
	int n , l , r , s ;
	cin >> n >> l >> r >> s ;
	int m = r - l + 1 ;
	if(s < (m*m + m)/2)
	{
		cout << -1 ;
		return ;
	}
	if(s > n*m - (m*m - m)/2)
	{
		cout << -1 ;
		return ;
	}
	set<int> st ;
	for(int i = 1 ; i <= n ; i++)
	{
		st.insert(i) ;
	}
	vector<int> v ;
	for(int i = n ; i ; i--)
	{
		if(m == 0)
		{
			break ;
		}
		if(sum(m - 1) <= s - i)
		{
			st.erase(i) ;
			v.pb(i) ;
			s -= i ;
			m-- ;
		}
		// cout << m << " " << s << "\n" ;
	}
	// cout << m << "\n" ;
	if(m)
	{
		cout << -1 ;
	}
	else
	{
		for(int i = 1 ; i <= n ; i++)
		{
			if(i < l || i > r)
			{
				// cout << "*" ;
				cout << *st.begin() ;
				st.erase(st.begin()) ;
			}
			else
			{
				// cout << "^" ;
				cout << v[i - l] ;
			}
			cout << " " ; 
		}
	}
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
