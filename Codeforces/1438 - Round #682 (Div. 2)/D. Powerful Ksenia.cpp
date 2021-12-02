/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100100
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	int a[n + 1] ;
	int sum = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
		sum ^= a[i] ;
	}
	if(!(n&1) && sum)
	{
		cout << "NO" ;
	}
	else
	{
		vector<int> v ;
		v.pb(1) ;
		v.pb(2) ;
		v.pb(3) ;
		int x = a[1]^a[2]^a[3] ;
		a[1] = x , a[2] = x , a[3] = x ;
		for(int i = 5 ; i <= n ; i+=2)
		{
			v.pb(i - 2) ;
			v.pb(i - 1) ;
			v.pb(i) ;
			int x = a[i - 2]^a[i - 1]^a[i] ;
			a[i - 2] = x , a[i - 1] = x , a[i] = x ;
		}
		for(int i = 2 ; i < n ; i+=2)
		{
			v.pb(i - 1) ;
			v.pb(i) ;
			v.pb(n) ;
			int x = a[n]^a[i - 1]^a[i] ;
			a[n] = x , a[i - 1] = x , a[i] = x ;
		}
		cout << "YES\n" << v.size()/3 << "\n" ;
		for(int i = 2 ; i < v.size() ; i += 3)
		{
			cout << v[i - 2] << " " << v[i - 1] << " " << v[i] << "\n" ;
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
