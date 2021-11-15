/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 200200
using namespace std ;
int n ;
string s ;
int x[N] , y[N] ;
int tx , ty ;
bool check(int c)
{
	for(int i = 0 ; i + c <= n ; i++)
	{
		int tempx = x[n] + x[i] - x[i + c] ;
		int tempy = y[n] + y[i] - y[i + c] ;
		int d = abs(tempx - tx) + abs(tempy - ty) ;
		if(d <= c)
		{
			return true ;
		}
	}
	return false ;
}
void solve()
{
	cin >> n >> s >> tx >> ty ;
	for(int i = 0 ; i < n ; i++)
	{
		x[i + 1] = x[i] , y[i + 1] = y[i] ;
		if(s[i] == 'U')
		{
			y[i + 1]++ ;
		}
		else if(s[i] == 'D')
		{
			y[i + 1]-- ;
		}
		else if(s[i] == 'R')
		{
			x[i + 1]++ ;
		}
		else 
		{
			x[i + 1]-- ;
		}
	}
	if(tx == x[n] && ty == y[n])
	{
		cout << 0 ;
		return ;
	}
	if((abs(tx) + abs(ty))%2 != n%2 || (abs(tx) + abs(ty) > n) || !check(n))
	{
		cout << -1 ;
		return ;
	}
	int l = 1 , r = n ;
	while(l != r)
	{
		int m = l + (r - l)/2 ;
		if(!check(m))
		{
			l = m + 1 ;
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
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
