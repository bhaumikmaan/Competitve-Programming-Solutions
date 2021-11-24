/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200005
using namespace std ;
int l[N] , r[N] ;
int n , s ;
bool check(int m)
{
	int k = (n + 1)>>1 ;
	vector<int> temp ;
	for(int i = 1 ; i <= n ; i++)
	{
		int mx = max(l[i] , m) ;
		if(r[i] >= mx)
		{
			temp.pb(mx - l[i]) ;
		}
	}
	if(temp.size() < k)
	{
		return false ;
	}
	sort(all(temp)) ;
	int sum = 0 ;
	for(int i = 0 ; i < k ; i++)
	{
		sum += temp[i] ;
	}
	if(sum > s)
	{
		return false ;
	}
	return true ;
}
void solve( )
{
	cin >> n >> s ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> l[i] >> r[i] ;
		s -= l[i] ;
	}
	int l = 0 , r = inf ;
	while(l < r)
	{
		int m = (l + r + 1)>>1 ;
		if(check(m))
		{
			l = m ;
		}
		else
		{
			r = m - 1 ;
		}
	}
	cout << l ;
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
