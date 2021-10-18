/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
	int n , m ;
	cin >> n >> m ;
	vector<string> s(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> s[i] ;
	}
	vector<int> cnt(m + 3 , 0) ;
	for(int i = 1 ; i < n ; i++) 
	{
		for(int j = 1 ; j < m ; j++) 
		{
			if(s[i][j-1] == 'X' && s[i-1][j] == 'X') 
			{
				cnt[j] = 1 ;
			}
		}
	}
	for(int i = 1 ; i <= m ; i++)
	{
		cnt[i] += cnt[i - 1] ;
	}
	int q ;
	cin >> q ;
	while(q--)
	{
		int x , y ;
		cin >> x >> y ;
		x-- , y-- ;
		if(cnt[y] - cnt[x] == 0)
		{
			cout << "YES" ;
		}
		else
		{
			cout << "NO" ;
		}		
		cout << "\n" ;
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
