/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e16
#define N 100010
using namespace std ;
int n , m ;
int d[N] , a[N] , x[N] , y[N] ;
bool check(int n)
{
	memset(x,0,sizeof(x)) ;
	memset(y,0,sizeof(y)) ;
	for(int i = 1 ; i <= n ; i++)
	{
		x[d[i]] = i ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		if(x[d[i]] == i)
		{
			y[i] = d[i] ;
		}
	}
	for(int i = 1 ; i <= m ; i++)
	{
		if(!x[i])
		{
			return false ;
		}
	}
	int j = 0 , l = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		if(y[i])
		{
			l++ ;
			int req = i - j - l ;
			if(req < a[y[i]])
			{
				return false ;
			}
			j += a[y[i]] ;
		}
	}
	return true ;
}
void solve( )
{
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> d[i] ;
	}
	for(int i = 1 ; i <= m ; i++)
	{
		cin >> a[i] ;
	}
	if(check(n))
	{
		int st = 1 , en = n , ans = -1 ;
		while(st <= en)
		{
			int mid = st + (en - st)/2 ;
			if(check(mid))
			{
				ans = mid ;
				en = mid - 1 ;
			}
			else
			{
				st = mid + 1 ;
			}
		}
		cout << ans ;
	}
	else
	{
		cout << -1 ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases-- )
    {
        solve() ;
        cout << "\n" ;
    }
    return 0 ;
}
