/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100005
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
	vi v(n + 1 , 0) ;
	for(int i = 0 ; i < n ; i++)
	{
		v[a[i]]++ ;
	}
	vi ans ;
	int i = 0 ;
	while(i < n)
	{
		int cnt = 0 ;
		while(v[cnt])
		{
			cnt++ ;
		}
		int cntt = 0 ;
		vi vis(cnt , 0) ;
		while(i < n)
		{
			if(a[i] < cnt && !vis[a[i]])
			{
				vis[a[i]] = 1 ;
				cntt++ ;
			}
			v[a[i]]-- ;
			i++ ;
			if(cntt == cnt)
			{
				break ;
			}
		}
		ans.pb(cnt) ;
	}
	cout << ans.size() << "\n" ;
	for(auto i:ans)
	{
		cout << i << " " ;
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
