/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 10000007
using namespace std ;
void solve()
{
	int n , k ;
	cin >> n >> k ;
	vector<int> a(n + 1) ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
	}
	int sum = 0 , len = 0 , l = 1 , r = 1 , j = 1 ;
	for(int i = 1 ; i <= n ; i++)
	{
		while(sum + a[j] + k >= 0 && j <= n)
		{
			sum += a[j] ;
			j++ ;
		}
		if(len < j - i)
		{
			len = j - i ;
			l = i , r = j - 1 ;
		}
		sum -= a[i] ;
	}
	if(len)
	{
		cout << l << " " << r ;
	}
	else
	{
		cout << -1 ;
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
