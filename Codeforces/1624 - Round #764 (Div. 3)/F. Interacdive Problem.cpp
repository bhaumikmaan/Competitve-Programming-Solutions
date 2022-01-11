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
int cnt , n , pre ;
bool check(int x)
{
	cout << "+ " << n - (x + cnt)%n << endl ;
	cnt += n - (x + cnt)%n ;
	int ret ;
	cin >> ret ;
	int temp = pre ;
	pre = ret ;
	if(ret == temp)
	{
		return false ;
	}
	return true ;
}
void solve()
{
	// int n ;
	cin >> n ;
	cnt = 0 ;
	int l = 0 , r = n ;
	while(l + 1 < r)
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
	// n -= l ;
	// n += cnt ;
	// cout << n << " " << cnt ;  
	cout << "! " << l + cnt ;
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << endl ;
    }	
    return 0 ;
}    	
