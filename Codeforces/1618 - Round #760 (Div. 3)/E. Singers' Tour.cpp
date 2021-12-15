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
	vector<int> v(n + 1) ;
	int sum = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> v[i] ;
		sum += v[i] ;
	}
	int nn = (n*(n + 1))/2 ;
	if(sum%nn)
	{
		cout << "NO" ;
	}
	else
	{
		sum /= nn ;
		vector<int> ans(n + 1) ;
		for(int i = 2 ; i <= n ; i++)
		{
			int temp = v[i] - v[i - 1] ;
			ans[i] = sum - temp ;
			if(ans[i]%n || ans[i] <= 0)
			{
				cout << "NO" ;
				return ;
			}
			ans[i] /= n ;
		}
		int temp = v[1] - v[n] ;
		ans[1] = sum - temp ;
		if(ans[1]%n || ans[1] <= 0)
		{
			cout << "NO" ;
			return ;
		}
		ans[1] /= n ;
		cout << "YES\n" ;
		for(int i = 1 ; i <= n ; i++)
		{
			cout << ans[i] << " " ;
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
