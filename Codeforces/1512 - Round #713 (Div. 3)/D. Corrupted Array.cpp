/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100010
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	vector<int> a(n + 2) ;
	int sum = 0 ;
	for(int i = 0 ; i < n + 2 ; i++)
	{
		cin >> a[i] ;
	}
	sort(all(a)) ;
	for(int i = 0 ; i < n ; i++)
	{
		sum += a[i] ;
	}
	if(sum == a[n] || sum == a[n + 1])
	{
		for(int i = 0 ; i < n ; i++)
		{
			cout << a[i] << " " ;
		}
	}
	else
	{
		sum += a[n] ;
		int ind = -1 ;
		for(int i = 0 ; i < n ; i++)
		{
			int temp = sum - a[i] ;
			if(temp == a.back())
			{
				ind = i ;
			}
		}
		if(ind == -1)
		{
			cout << -1 ;
		}
		else
		{
			for(int i = 0 ; i < n + 1 ; i++)
			{
				if(i != ind)
				{
					cout << a[i] << " " ;
 				}
			}
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
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
