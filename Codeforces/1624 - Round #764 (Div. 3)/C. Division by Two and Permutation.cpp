/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 400005
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES" 
void solve()
{
	int n ;
	cin >> n ;
	vi a(n) ;
	for(auto &i:a)
	{
		cin >> i ;
	}
	vvi v(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		while(a[i])
		{
			if(a[i] > n)
			{
				a[i] /= 2 ;
				continue ;
			}
			v[i].pb(a[i]) ;
			a[i] /= 2 ;
		}
	}
	set<int> s ;
	for(int i = n ; i ; i--)
	{
		int r = inf , p ;
		for(int j = 0 ; j < n ; j++)
		{
			if(s.find(j) == s.end())
			{
				for(int k = 0 ; k < v[j].size() ; k++)
				{
					if(v[j][k] == i)
					{
						r = min(r , k) ;
						p = j ;
					}
				}
			}
		}
		if(r != inf)
		{
			s.insert(p) ;
		}
		else
		{
			cout << "NO" ;
			return ;
		}
	}
	haan ;
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
