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
void solve( )
{
	string s ;
	cin >> s ;
	int a[3] , b[3] ;
	for(int i = 0 ;  i < 3 ; i++)
	{
		cin >> a[i] ;
	}
	for(int i = 0 ;  i < 3 ; i++)
	{
		cin >> b[i] ;
	}
	vector<int> req(3 , 0) ;
	int x ;
	cin >> x ;
	for(auto i:s)
	{
		if(i == 'B')
		{
			req[0]++ ;
		}
		else if(i == 'S')
		{
			req[1]++ ;
		}
		else
		{
			req[2]++ ;
		}
	}
	int ans = 0 ;
	int l = 0 , r = 10000000000000LL ;
	while(l <= r)
	{
		int mid = l + (r - l)/2 ;
		int cntb = mid*req[0] - a[0] ;
		int cnts = mid*req[1] - a[1] ;
		int cntc = mid*req[2] - a[2] ;
		if(cntb >= 0)
		{
			cntb *= b[0] ;
		}
		else
		{
			cntb = 0 ;
		}
		if(cnts >= 0)
		{
			cnts *= b[1] ;
		}
		else
		{
			cnts = 0 ;
		}
		if(cntc >= 0)
		{
			cntc *= b[2] ;
		}
		else
		{
			cntc = 0 ;
		}
		int t = cntb + cnts + cntc ;
		// cout << t << " " << x << "\n" ;
		if(t > x)
		{
			r = mid - 1 ;
		}
		else
		{
			ans = mid ;
			l = mid + 1 ;
		}
	}
	cout << ans ;
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
