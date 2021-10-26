/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	vector<int> a(n) ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
	}
	if(n&1)
	{
		if(a[0] + a[1])
		{
			cout<< -a[2] << " " << -a[2] << " " << a[1] + a[0] << " " ;
		}
		else if(a[1] + a[2])
		{
			cout<< a[2] + a[1] << " " << -a[0] << " " << -a[0] << " " ;
		}
		else
		{
			cout<< -a[1] << " " << a[0] + a[2] << " " << -a[1] << " " ;
		}
		for(int i = 3 ; i < n ; i+=2)
		{
			cout << -a[i + 1] << " " << a[i] << " " ;
		}
	}
	else
	{
		for(int i = 0 ; i < n ; i+=2)
		{
			cout << -a[i + 1] << " " << a[i] << " " ;
		}
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve() ;
        cout << "\n" ;
    }
    return 0 ;
}    
