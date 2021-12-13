/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100007
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	vector<int> a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		a[i]-- ;
	}	
	if(n == 1)
	{
		cout << "YES" ;
		return ;
	}
	if(n == 2)
	{
		if(a[0] > a[1])
		{
			cout << "NO" ;
		}
		else
		{
			cout << "YES" ;
		}
		return ;
	}
	vector<int> v(n , -1) ;
	for(int i = 0 ; i < n ; i++)
	{
		if(v[a[i]] != -1)
		{
			cout << "YES" ;
			return ;
		}
		v[a[i]] = i ;
	}
	bool flag = false ;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] != i)
		{
			flag ^= true ;
			int x = v[i] ;
			swap(v[a[i]] , v[a[x]]) ;
			swap(a[i] , a[x]) ;
		}
	}
	if(flag)
	{
		cout << "NO" ;
	}
	else
	{
		cout << "YES" ;
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
