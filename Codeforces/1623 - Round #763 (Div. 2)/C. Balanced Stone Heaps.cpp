/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200008
using namespace std ;
typedef vector<int> vi;
typedef vector<vector<int>> vvi ;
vi a ;
int n ;
bool check(int x)
{
	vi b(n + 1) ;
	b = a ;
	for(int i = n ; i ; i--)
	{
		if(b[i] < x)
		{
			return false ;
		}
		if(i >= 3)
		{
			int d = min(b[i] - x , a[i])/3 ;
			b[i] -= 3*d ;
			b[i - 1] += d ;
			b[i - 2] += 2*d ;
		}
	}
	return true ;
}
void solve()
{
	// int n ;
	cin >> n ;
	a.resize(n + 1 , 0) ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	int l = 0 , r = inf ;
	while(l + 1 != r)
	{
		int m = (l + r)>>1 ;
		if(check(m))
		{
			l = m ;
		}
		else
		{
			r = m ;
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
