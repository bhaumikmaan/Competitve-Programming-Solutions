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
	int n , a , b ;
	cin >> n >> a >> b ;
	if((a + b) > n - 2 || abs(a - b) > 1)
	{
		cout << -1 ;
	}
	else
	{
		if(a == b)
		{
			int l = 1 , r = n ;
			v.pb(l) ;
			l++ ;
			int cnt = 0 ;
			while(cnt < a)
			{
				cnt++ ;
				v.pb(r) ;
				v.pb(l) ;
				r-- ;
				l++ ;
			}
			for(int i = l ; i <= r ; i++)
			{
				v.pb(i) ;
			}
		}
		else if(a > b)
		{
			int l = 1 , r = n ;
			v.pb(l) ;
			l++ ;
			int cnt = 0 ;
			while(cnt < a - 1)
			{
				cnt++ ;
				v.pb(r) ;
				v.pb(l) ;
				r-- ;
				l++ ;
			}
			for(int i = r ; i >= l ; i--)
			{
				v.pb(i) ;
			}
		}
		else
		{
			int l = 1 , r = n ;
			v.pb(r) ;
			r-- ;
			int cnt = 0 ;
			while(cnt < b - 1)
			{
				cnt++ ;
				v.pb(l) ;
				v.pb(r) ;
				r-- ;
				l++ ;
			}
			for(int i = l ; i <= r ; i++)
			{
				v.pb(i) ;
			}
		}
		for(auto i:v)
		{
			cout << i << " " ;
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
