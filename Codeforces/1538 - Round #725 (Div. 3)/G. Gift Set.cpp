/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1e9
#define N 100010
using namespace std ;
int x , y , a , b ;
void solve()
{
	cin >> x >> y >> a >> b ;
	if(b > a)
	{
		swap(a , b) ;
	}
	if(y > x)
	{
		swap(x , y) ;
	}
	if(a == b)
	{
		cout << min(x , y)/a ;
		return ;
	}
	int c = max(min({(x - y + a - b - 1)/(a - b) , x/a , y/b}), 0LL) ;
	int ans = c ;
	x -= a*c ;
	y -= b*c ;
	c = min(x , y)/(a + b) ;
	ans += c*2 ;
	x -= c*(a + b) ;
	y -= c*(a + b) ;
	if(y > x)
	{
		swap(a , b) ;
	}
	if(x >= a && y >= b)
	{
		ans++ ;
	}
	cout << ans ;
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
