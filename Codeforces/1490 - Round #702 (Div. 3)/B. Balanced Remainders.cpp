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
	int n ;
	cin >> n ;
	int a[n] ;
	vector<int> d(3 , 0) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		d[a[i]%3]++ ;
	}
	int ans = 0 ;
	for(int i = 0 ; i < 3 ; i++)
	{
		if(d[i] > n/3)
		{
			ans += d[i] - n/3 ;
			d[(i + 1)%3] += d[i] - n/3 ;
			d[i] = n/3 ;
		}
		else if(d[i] < n/3)
		{
			ans += n/3 - d[i] ;
			d[(i + 2)%3] -= n/3 - d[i] ;
			d[i] = n/3 ;
		}
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
