/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
// #define int ll MC
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
int get(int n)
{
	int r = 0 ;
	for(int i = 2 ; i*i <= n ; i++)
	{
		while(n%i == 0)
		{
			n /= i ;
			r++ ;
		}
	}
	if(n > 1)
	{
		r++ ;
	}
	return r ;
}
void solve()
{
	int a , b , k ;
	cin >> a >> b >> k ;
	int cnt = get(a) ;	
	cnt += get(b) ;
	if(k == 1)
	{
		if(a == b || (a%b && b%a))
		{
			cout << "NO" ;
			return ;
		}
	}
	if(k > cnt)
	{
		cout << "NO" ;
		return ;
	}
	cout << "YES" ;
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
