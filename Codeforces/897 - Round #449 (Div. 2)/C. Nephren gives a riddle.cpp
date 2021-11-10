/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf 1000000000000000000
#define N 100010
#define sz(s) s.length()
using namespace std ;
int a[N];
//---------------------------------------------------------------------------------------
string f = "What are you doing at the end of the world? Are you busy? Will you save us?" ;
string s = "What are you doing while sending \"" ;
string m = "\"? Are you busy? Will you send \"" ;
string e = "\"?" ;
int fl = sz(f) , sl = sz(s) , ml = sz(m) , el = sz(e) ;
//---------------------------------------------------------------------------------------
char query(int n , int k)
{
	if(n == 0 && k < fl)
	{
		return f[k] ;
	}
	else if(n == 0)
	{
		return '.' ;
	}
	if(k < sl)
	{
		return s[k] ;
	}
	else if(k < sl + a[n-1])
	{
		return query(n - 1 , k - sl) ;
	}
	else if(k < sl + ml + a[n - 1])
	{
		return m[k - sl - a[n - 1]] ;
	}
	else if(k < sl + ml + 2*a[n-1])
	{
		return query(n - 1 , k - sl - ml - a[n-1]) ;
	}
	return e[k - sl - ml - 2*a[n -1]] ;
}
void solve()
{
	int q ;
	cin >> q ;
	a[0] = fl ;
	for(int i = 1 ; i <= 100000 ; i++)
	{
		a[i] = min(inf , a[i - 1]*2 + sl + ml + el) ;
	}
	while(q--)
	{
		int n , k ;
		cin >> n >> k ;
		if(k <= a[n])
		{
			cout << query(n , k - 1) ;
		}
		else
		{
			cout << "." ;
		}
	}
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
