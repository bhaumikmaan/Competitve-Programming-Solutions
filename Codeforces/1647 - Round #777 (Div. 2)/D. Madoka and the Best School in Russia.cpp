/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 998244353
#define inf LLONG_MAX
#define N 200010
using namespace std ;
typedef vector<int> vi ; 
typedef vector<string> vs ;
typedef vector<vector<int>> vvi ;
#define haan cout << "YES"
bool isprime(int n)
{
	for(int i = 2 ; i*i <= n ; i++)
	{
		if(n%i == 0)
		{
			return false ;
		}
	}
	return true ;
}
void solve()
{
	int x , d ;
	cin >> x >> d ;
	int cnt = 0 ;
	while(!(x%d))
	{
		cnt++ ;
		x /= d ;
	}
	if(cnt < 2)
	{
		cout << "NO" ;
		return ;
	}
	if(!isprime(x))
	{
		haan ;
		return ;
	}
	if(isprime(d) || cnt == 2)
	{
		cout << "NO" ;
		return ;
	}
	if(cnt > 3)
	{
		haan ;
		return ;
	}
	for(int i = 2 ; i*i <= d ; i++)
	{
		if(!(d%i))
		{
			if(x*i%d || x*(d/i)%d)
			{
				haan ;
				return ;
			}
		}
	}
	cout << "NO" ;
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
